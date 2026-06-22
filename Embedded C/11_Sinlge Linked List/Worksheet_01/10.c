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

struct Node* merge(struct Node* l1, struct Node* l2) {
    struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;
    while (l1 && l2) {
        if (l1->data <= l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

struct Node* mergeSort(struct Node* head) {
    if (!head || !head->next) return head;
    struct Node *slow = head, *fast = head, *prev = NULL;
    while (fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;
    struct Node* l1 = mergeSort(head);
    struct Node* l2 = mergeSort(slow);
    return merge(l1, l2);
}

void printList(struct Node* node) {
    while (node) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = newNode(2);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(7);
    head->next->next->next->next = newNode(5);

    struct Node* sorted = mergeSort(head);
    printf("Sorted list: ");
    printList(sorted);
    return 0;
}