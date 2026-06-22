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

struct Node* interleave(struct Node* l1, struct Node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    struct Node dummy;
    struct Node* tail = &dummy;
    while (l1 || l2) {
        if (l1) {
            tail->next = l1;
            l1 = l1->next;
            tail = tail->next;
        }
        if (l2) {
            tail->next = l2;
            l2 = l2->next;
            tail = tail->next;
        }
    }
    return dummy.next;
}

void printList(struct Node* node) {
    while (node) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* l1 = newNode(1);
    l1->next = newNode(3);
    l1->next->next = newNode(5);

    struct Node* l2 = newNode(2);
    l2->next = newNode(4);
    l2->next->next = newNode(6);

    struct Node* res = interleave(l1, l2);
    printf("Result: ");
    printList(res);
    return 0;
}2