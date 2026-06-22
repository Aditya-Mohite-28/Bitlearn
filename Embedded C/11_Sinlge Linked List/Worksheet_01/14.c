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

struct Node* swapPairs(struct Node* head) {
    struct Node dummy;
    dummy.next = head;
    struct Node* point = &dummy;
    while (point->next && point->next->next) {
        struct Node* swap1 = point->next;
        struct Node* swap2 = point->next->next;
        swap1->next = swap2->next;
        swap2->next = swap1;
        point->next = swap2;
        point = swap1;
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
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    struct Node* res = swapPairs(head);
    printf("Reversed in pairs: ");
    printList(res);
    return 0;
}