#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* insert_at_beginning(struct Node *head, int val) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) return head;
    
    new_node->data = val;
    new_node->next = head;
    return new_node;
}

struct Node* insert_at_end(struct Node *head, int val) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) return head;
    
    new_node->data = val;
    new_node->next = NULL;
    
    if (head == NULL) {
        return new_node;
    }
    
    struct Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}

struct Node* insert_after_value(struct Node *head, int target, int val) {
    struct Node *current = head;
    while (current != NULL && current->data != target) {
        current = current->next;
    }
    
    if (current == NULL) {
        return head;
    }
    
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) return head;
    
    new_node->data = val;
    new_node->next = current->next;
    current->next = new_node;
    return head;
}

struct Node* delete_node(struct Node *head, int key) {
    if (head == NULL) return NULL;
    
    struct Node *temp = head;
    
    if (head->data == key) {
        head = head->next;
        free(temp);
        return head;
    }
    
    struct Node *prev = NULL;
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) return head;
    
    prev->next = temp->next;
    free(temp);
    return head;
}

void print_list(const struct Node *head) {
    const struct Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void free_list(struct Node *head) {
    struct Node *current = head;
    struct Node *next_node = NULL;
    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
}

int main() {
    struct Node *head = NULL;

    head = insert_at_end(head, 20);
    head = insert_at_beginning(head, 10);
    head = insert_at_end(head, 40);
    head = insert_after_value(head, 20, 30);

    print_list(head);

    head = delete_node(head, 20);
    print_list(head);

    head = delete_node(head, 10);
    print_list(head);

    free_list(head);
    head = NULL;

    return 0;
}