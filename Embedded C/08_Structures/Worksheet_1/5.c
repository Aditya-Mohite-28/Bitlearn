#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define POOL_SIZE 3

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node blocks[POOL_SIZE];
    Node *free_list;
} PoolManager;

void init_pool(PoolManager *pm) {
    for (int i = 0; i < POOL_SIZE - 1; i++) {
        pm->blocks[i].next = &pm->blocks[i + 1];
    }
    pm->blocks[POOL_SIZE - 1].next = NULL;
    pm->free_list = &pm->blocks[0];
}

Node* alloc_block(PoolManager *pm) {
    if (pm->free_list == NULL) return NULL;
    Node *allocated = pm->free_list;
    pm->free_list = pm->free_list->next;
    return allocated;
}

void free_block(PoolManager *pm, Node *node) {
    node->next = pm->free_list;
    pm->free_list = node;
}

int main() {
    Node *dynamic_node = (Node*)malloc(sizeof(Node));
    if (dynamic_node != NULL) {
        dynamic_node->data = 100;
        dynamic_node->next = NULL;
        printf("Dynamic Malloc Node Data: %d\n", dynamic_node->data);
        free(dynamic_node);
    }

    Node *head = (Node*)malloc(sizeof(Node));
    Node *second = (Node*)malloc(sizeof(Node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = NULL;

    printf("Linked List traversal: %d -> %d\n", head->data, second->next ? second->data : 0);
    free(second);
    free(head);

    PoolManager pool;
    init_pool(&pool);

    Node *n1 = alloc_block(&pool);
    Node *n2 = alloc_block(&pool);
    if (n1 && n2) {
        n1->data = 500;
        n2->data = 600;
        printf("Pool block 1 data: %d, Pool block 2 data: %d\n", n1->data, n2->data);
    }
    free_block(&pool, n1);
    
    return 0;
}