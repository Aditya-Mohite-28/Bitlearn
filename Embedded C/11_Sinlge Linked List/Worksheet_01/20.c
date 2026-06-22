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

struct Node* swapAdjacent(struct Node* head) {
    if (!head || !head->next) return head;
    struct Node* first = head;
    struct Node* second = head->next;
    first->next = swapAdjacent(second->next);
    second->next = first;
    return second;
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

    struct Node* res = swapAdjacent(head);
    printf("Swapped list: ");
    printList(res);
    return 0;
}