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

struct Node* getNthFromLast(struct Node* head, int n) {
    struct Node *main_ptr = head, *ref_ptr = head;
    for (int i = 0; i < n; i++) {
        if (!ref_ptr) return NULL;
        ref_ptr = ref_ptr->next;
    }
    while (ref_ptr) {
        main_ptr = main_ptr->next;
        ref_ptr = ref_ptr->next;
    }
    return main_ptr;
}

int main() {
    struct Node* head = newNode(1);
    head->next = newNode(3);
    head->next->next = newNode(5);
    head->next->next->next = newNode(11);

    struct Node* target = getNthFromLast(head, 2);
    if (target) {
        printf("Result: %d\n", target->data);
    }
    return 0;
}