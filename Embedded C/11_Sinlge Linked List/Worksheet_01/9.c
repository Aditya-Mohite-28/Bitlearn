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

struct Node* swapKth(struct Node* head, int k) {
    int n = 0;
    struct Node* curr = head;
    while (curr) {
        n++;
        curr = curr->next;
    }
    if (k > n) return head;
    if (2 * k - 1 == n) return head;

    struct Node* p1 = head;
    struct Node* p1_prev = NULL;
    for (int i = 1; i < k; i++) {
        p1_prev = p1;
        p1 = p1->next;
    }

    struct Node* p2 = head;
    struct Node* p2_prev = NULL;
    for (int i = 1; i < n - k + 1; i++) {
        p2_prev = p2;
        p2 = p2->next;
    }

    if (p1_prev) p1_prev->next = p2;
    else head = p2;

    if (p2_prev) p2_prev->next = p1;
    else head = p1;

    struct Node* temp = p1->next;
    p1->next = p2->next;
    p2->next = temp;

    return head;
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

    struct Node* res = swapKth(head, 2);
    printf("Swapped list: ");
    printList(res);
    return 0;
}