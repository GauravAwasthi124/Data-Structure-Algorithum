#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

void insert(struct Node** head, int data) {
    struct Node* Newnode = (struct Node*)malloc(sizeof(struct Node));
    Newnode->data = data;
    Newnode->link = *head;
    *head = Newnode;
}

struct Node* merge_lists(struct Node* list1, struct Node* list2) {
    if (!list1) {
        return list2;
    }
    if (!list2) {
        return list1;
    }
    
    // Start with the smaller head node
    struct Node* cur;
    if (list1->data < list2->data) {
        cur = list1;
        list1 = list1->link;
    } else {
        cur = list2;
        list2 = list2->link;
    }
    
    struct Node* merged_head = cur;
    
    while (list1 && list2) {
        if (list1->data < list2->data) {
            cur->link = list1;
            list1 = list1->link;
        } else {
            cur->link = list2;
            list2 = list2->link;
        }
        cur = cur->link;
    }
    
    // Append remaining nodes from list1 or list2
    if (list1) {
        cur->link = list1;
    } else {
        cur->link = list2;
    }
    
    return merged_head;
}

void print_list(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->link;
    }
    printf("\n");
}

int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;
    
    int n;
    printf("Enter the number of nodes for linked list 1: ");
    scanf("%d", &n);
    printf("Enter the data for node: ");
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        insert(&list1, data);
    }
    
    printf("Linked list 1: ");
    print_list(list1);
    
    printf("Enter the number of nodes for linked list 2: ");
    scanf("%d", &num_nodes);
    for (int i = 0; i < num_nodes; i++) {
        int data;
        printf("Enter the data for node %d: ", i+1);
        scanf("%d", &data);
        insert(&list2, data);
    }
    
    printf("Linked list 2: ");
    print_list(list2);
    
    struct Node* merged_head = merge_lists(list1, list2);
    
    printf("Merged linked list: ");
    print_list(merged_head);
    
    return 0;
}