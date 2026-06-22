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

struct Node* mergeAlternate(struct Node* l1, struct Node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    struct Node* l1_curr = l1;
    struct Node* l2_curr = l2;
    struct Node *l1_next, *l2_next;
    while (l1_curr && l2_curr) {
        l1_next = l1_curr->next;
        l2_next = l2_curr->next;
        l2_curr->next = l1_next;
        l1_curr->next = l2_curr;
        l1_curr = l1_next;
        l2_curr = l2_next;
    }
    return l1;
}

void printList(struct Node* node) {
    while (node) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* l1 = newNode(9);
    l1->next = newNode(7);
    l1->next->next = newNode(5);

    struct Node* l2 = newNode(10);
    l2->next = newNode(8);
    l2->next->next = newNode(6);

    struct Node* res = mergeAlternate(l1, l2);
    printf("Merged list: ");
    printList(res);
    return 0;
}