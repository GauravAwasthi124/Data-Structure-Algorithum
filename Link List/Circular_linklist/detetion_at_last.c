#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * link;
}*head;
void createList(int n);
void Deletion_at_Last();
void displayList();
int main()
{
    int n, data;
    head = NULL;
    printf("How many element you want to print\n");
    scanf("%d", &n);
    createList(n);
    printf("Output\n");
    displayList();
    Deletion_at_Last();
    printf("Output after deletion\n");
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
void Deletion_at_Last()
{
    struct node *temp,*delete;
    if(head == NULL)
    {
        printf("Linklist is empty");
    }
    else
    {
        temp=head;
        while (temp->link->link!=head)
        {
            temp=temp->link;
        }
        delete=temp->link;
        temp->link=delete->link;
        free(delete);
        delete=NULL;
    }
    
}