#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct Node* reverseKGroup(struct Node* head, int k) {
    struct Node* curr = head;
    struct Node* next = NULL;
    struct Node* prev = NULL;
    int count = 0;
    struct Node* check = head;
    for (int i = 0; i < k; i++) {
        if (!check) return head;
        check = check->next;
    }
    while (curr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next) {
        head->next = reverseKGroup(next, k);
    }
    return prev;
}

void printList(struct Node* node) {
    while (node) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = newNode(6);

    struct Node* res = reverseKGroup(head, 3);
    printf("Reversed: ");
    printList(res);
    return 0;
}