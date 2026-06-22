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

struct Node* partition(struct Node* head, int x) {
    struct Node lessHead = {0, NULL}, equalHead = {0, NULL}, greaterHead = {0, NULL};
    struct Node *lessTail = &lessHead, *equalTail = &equalHead, *greaterTail = &greaterHead;
    struct Node* curr = head;
    while (curr) {
        if (curr->data < x) {
            lessTail->next = curr;
            lessTail = lessTail->next;
        } else if (curr->data == x) {
            equalTail->next = curr;
            equalTail = equalTail->next;
        } else {
            greaterTail->next = curr;
            greaterTail = greaterTail->next;
        }
        curr = curr->next;
    }
    greaterTail->next = NULL;
    equalTail->next = greaterHead.next;
    lessTail->next = equalHead.next ? equalHead.next : greaterHead.next;
    return lessHead.next;
}

void printList(struct Node* node) {
    while (node) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = newNode(3);
    head->next = newNode(5);
    head->next->next = newNode(7);
    head->next->next->next = newNode(5);
    head->next->next->next->next = newNode(9);
    head->next->next->next->next->next = newNode(2);
    head->next->next->next->next->next->next = newNode(1);

    struct Node* res = partition(head, 5);
    printf("Reordered list: ");
    printList(res);
    return 0;
}