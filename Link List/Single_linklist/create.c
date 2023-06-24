#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};
void insert(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->link = *head;
    *head = new_node;
}
void print_list(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->link;
    }
    printf("\n");
}
int main() {
    struct Node* head = NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i <n; i++) {
        int data;
        printf("Enter the data for node %d: ", i+1);
        scanf("%d", &data);
        insert(&head, data);
    }
    printf("Unsorted linked list: ");
    print_list(&head);
    return 0;
}