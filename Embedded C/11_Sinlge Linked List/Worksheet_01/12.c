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

struct Node* sortedMerge(struct Node* a, struct Node* b) {
    struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;
    while (a && b) {
        if (a->data <= b->data) {
            tail->next = a;
            a = a->next;
        } else {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }
    tail->next = a ? a : b;
    return dummy.next;
}

struct Node* mergeKLists(struct Node* arr[], int last) {
    while (last != 0) {
        int i = 0, j = last;
        while (i < j) {
            arr[i] = sortedMerge(arr[i], arr[j]);
            i++;
            j--;
            if (i >= j) last = j;
        }
    }
    return arr[0];
}

void printList(struct Node* node) {
    while (node) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* arr[3];

    arr[0] = newNode(10);
    arr[0]->next = newNode(20);
    arr[0]->next->next = newNode(50);

    arr[1] = newNode(30);
    arr[1]->next = newNode(40);
    arr[1]->next->next = newNode(60);

    arr[2] = newNode(10);
    arr[2]->next = newNode(70);
    arr[2]->next->next = newNode(100);

    struct Node* res = mergeKLists(arr, 2);
    printf("Merged list: ");
    printList(res);
    return 0;
}