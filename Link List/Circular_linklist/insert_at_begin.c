#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * link;
}*head;
void createList(int n);
void insertAtBeginning(int data);
void display();
int main()
{
    int n, data;
    head = NULL;
    printf("How many element you want to print\n");
    scanf("%d", &n);
    createList(n);
    printf("Output\n");
    display();
    printf("Enter the data you want insert at first\n");
    scanf("%d",&data);
    insertAtBeginning(data);
     printf("Output after Insertion\n");
    display();
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
void insertAtBeginning(int data)
{
    struct node *newNode, *current;

    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->link = head;
        current = head;
        while(current->link != head)
        {
            current = current->link;
        }
        current->link = newNode;
        head = newNode;
    }
}
void display()
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