#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * link;
}*head;
void createList(int n);
void delete_at_begin();
void displayList();
int main()
{
    int n;
    head = NULL;
    printf("How many element you want to print\n");
    scanf("%d", &n);
    createList(n);
    displayList();
    delete_at_begin();
    printf("Output\n");
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
void delete_at_begin()
{   
    struct node *temp;
    struct node *temp2=head;
    temp = head;
    if (head==NULL)
    {
        printf("Linklist is empty");
    }
    else
    {
    while (temp->link!=head){
    temp=temp->link;
    }
        
        temp->link=head->link;
        head = head->link;
        free(temp2);
        temp2=NULL;
    }
    
}
