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

struct Node* addLists(struct Node* l1, struct Node* l2) {
    struct Node dummy = {0, NULL};
    struct Node* tail = &dummy;
    int carry = 0;
    while (l1 || l2 || carry) {
        int sum = carry;
        if (l1) { sum += l1->data; l1 = l1->next; }
        if (l2) { sum += l2->data; l2 = l2->next; }
        carry = sum / 10;
        tail->next = newNode(sum % 10);
        tail = tail->next;
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
    struct Node* l1 = newNode(8);
    l1->next = newNode(7);
    l1->next->next = newNode(9);
    l1->next->next->next = newNode(2);

    struct Node* l2 = newNode(2);
    l2->next = newNode(1);
    l2->next->next = newNode(2);
    l2->next->next->next = newNode(3);

    struct Node* res = addLists(l1, l2);
    printf("Result: ");
    printList(res);
    return 0;
}