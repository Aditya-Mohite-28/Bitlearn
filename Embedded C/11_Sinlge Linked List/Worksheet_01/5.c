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

int getCount(struct Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

struct Node* getIntersectionNode(struct Node* head1, struct Node* head2) {
    int c1 = getCount(head1);
    int c2 = getCount(head2);
    int d = abs(c1 - c2);
    struct Node* current1 = head1;
    struct Node* current2 = head2;
    if (c1 > c2) {
        for (int i = 0; i < d; i++) current1 = current1->next;
    } else {
        for (int i = 0; i < d; i++) current2 = current2->next;
    }
    while (current1 && current2) {
        if (current1 == current2) return current1;
        current1 = current1->next;
        current2 = current2->next;
    }
    return NULL;
}

int main() {
    struct Node* common = newNode(3);
    common->next = newNode(4);

    struct Node* headA = newNode(1);
    headA->next = newNode(2);
    headA->next->next = common;

    struct Node* headB = newNode(5);
    headB->next = common;

    struct Node* intersection = getIntersectionNode(headA, headB);
    if (intersection) {
        printf("Intersection found at node with data: %d\n", intersection->data);
    }
    return 0;
}