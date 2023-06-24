#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void sortList(struct Node** head_ref) {
    struct Node* temp = NULL;
    int swapped;

    do {
        swapped = 0;
        struct Node* ptr1 = *head_ref;

        while (ptr1->next != temp) {
            if (ptr1->data > ptr1->next->data) {
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        temp = ptr1;
    } while (swapped);
}

int main() {
    struct Node* head = NULL;
    int n, data;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        push(&head, data);
    }

    printf("Linked List before sorting: \n");
    printList(head);

    sortList(&head);

    printf("Linked List after sorting: \n");
    printList(head);

    return 0;
}