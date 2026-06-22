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

void splitHalf(struct Node* head, struct Node** front, struct Node** back) {
    if (!head || !head->next) {
        *front = head;
        *back = NULL;
        return;
    }
    struct Node* slow = head;
    struct Node* fast = head->next;
    while (fast) {
        fast = fast->next;
        if (fast) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *front = head;
    *back = slow->next;
    slow->next = NULL;
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

    struct Node* front = NULL;
    struct Node* back = NULL;
    splitHalf(head, &front, &back);

    printf("First half: ");
    printList(front);
    printf("Second half: ");
    printList(back);
    return 0;
}