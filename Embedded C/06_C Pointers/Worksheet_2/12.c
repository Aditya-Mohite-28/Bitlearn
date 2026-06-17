#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void reverse_string_recursive(char *start, char *end) {
    if (start >= end) {
        return;
    }
    
    char temp = *start;
    *start = *end;
    *end = temp;
    
    reverse_string_recursive(start + 1, end - 1);
}

void print_list_recursive(const struct Node *head) {
    if (head == NULL) {
        printf("NULL\n");
        return;
    }
    
    printf("%d -> ", head->data);
    print_list_recursive(head->next);
}

int sum_array_recursive(const int *ptr, int size) {
    if (size <= 0) {
        return 0;
    }
    
    return *ptr + sum_array_recursive(ptr + 1, size - 1);
}

struct Node* create_node(int val) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node != NULL) {
        new_node->data = val;
        new_node->next = NULL;
    }
    return new_node;
}

int main() {
    char str[] = "Aditya";
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--;
    
    reverse_string_recursive(str, end);
    printf("Reversed String: %s\n", str);

    struct Node *head = create_node(5);
    head->next = create_node(10);
    head->next->next = create_node(15);
    
    printf("Linked List: ");
    print_list_recursive(head);

    int arr[] = {2, 4, 6, 8, 10};
    int total_sum = sum_array_recursive(arr, 5);
    printf("Array Sum: %d\n", total_sum);

    struct Node *current = head;
    while (current != NULL) {
        struct Node *next = current->next;
        free(current);
        current = next;
    }
    head = NULL;

    return 0;
}