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

struct Node* rotateRight(struct Node* head, int k) {
    if (!head || !head->next || k == 0) return head;
    struct Node* tail = head;
    int len = 1;
    while (tail->next) {
        tail = tail->next;
        len++;
    }
    k = k % len;
    if (k == 0) return head;
    tail->next = head;
    struct Node* newTail = head;
    for (int i = 0; i < len - k - 1; i++) {
        newTail = newTail->next;
    }
    struct Node* newHead = newTail->next;
    newTail->next = NULL;
    return newHead;
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
    head->next = newNode(3);
    head->next->next = newNode(4);
    head->next->next->next = newNode(7);
    head->next->next->next->next = newNode(9);

    struct Node* res = rotateRight(head, 2);
    printf("Rotated list: ");
    printList(res);
    return 0;
}