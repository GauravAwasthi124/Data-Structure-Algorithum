#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * link;
}*head;
void createList(int n);
void insertAtN(int data, int position);
void displayList();
int main()
{
    int n, data,position;
    head = NULL;
    printf("How many element you want to print\n");
    scanf("%d", &n);
    createList(n);
    printf("Output\n");
    displayList();
    printf("Enter the data you want insert\n");
    scanf("%d",&data);
    printf("Enter the position you want insert\n");
    scanf("%d",&position);
    insertAtN(data,position);
    printf("Output after insertion\n");
    displayList();
    return 0;
}
void createList(int n)
{
    int i, data;
    struct node *prevNode, *newNode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        printf("Enter the element\n");
        scanf("%d", &data);
        head->data = data;
        head->link = NULL;
        prevNode = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter the element\n");
            scanf("%d", &data);

            newNode->data = data;
            newNode->link = NULL;
            prevNode->link = newNode;
            prevNode = newNode;
        }
        prevNode->link = head;
    }
}
void insertAtN(int data, int position)
{
    struct node *newNode, *current;
    int i;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        current = head;
        for(i=2; i<=position-1; i++)
        {
            current = current->link;
        }
        newNode->link = current->link;
        current->link = newNode;
    }
}
void displayList()
{
    struct node *current;
    int n = 1;
    if(head == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        current = head;
       do {
            printf("Data-%d\n",current->data);
            current = current->link;
        }while(current != head);
    }
}