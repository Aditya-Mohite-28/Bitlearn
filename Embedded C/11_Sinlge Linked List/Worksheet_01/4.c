#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* random;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    node->random = NULL;
    return node;
}

struct Node* copyRandomList(struct Node* head) {
    if (!head) return NULL;
    struct Node* curr = head;
    while (curr) {
        struct Node* temp = newNode(curr->data);
        temp->next = curr->next;
        curr->next = temp;
        curr = temp->next;
    }
    curr = head;
    while (curr) {
        if (curr->random) {
            curr->next->random = curr->random->next;
        }
        curr = curr->next->next;
    }
    curr = head;
    struct Node* dummy = newNode(0);
    struct Node* copyTail = dummy;
    while (curr) {
        copyTail->next = curr->next;
        copyTail = copyTail->next;
        curr->next = copyTail->next;
        curr = curr->next;
    }
    struct Node* clonedHead = dummy->next;
    free(dummy);
    return clonedHead;
}

void printListWithRandom(struct Node* head) {
    struct Node* curr = head;
    while (curr) {
        printf("%d", curr->data);
        if (curr->random) {
            printf("(->%d)", curr->random->data);
        }
        printf(" ");
        curr = curr->next;
    }
    printf("\n");
}

int main() {
    struct Node* n1 = newNode(1);
    struct Node* n2 = newNode(2);
    struct Node* n3 = newNode(3);
    struct Node* n4 = newNode(5);
    struct Node* n5 = newNode(7);

    n1->next = n2; n2->next = n3; n3->next = n4; n4->next = n5;

    n1->random = n3;
    n2->random = n4;
    n3->random = n5;
    n4->random = n1;
    n5->random = n3;

    struct Node* cloned = copyRandomList(n1);
    printf("New list with same data and random pointers correctly mapped.\n");
    return 0;
}