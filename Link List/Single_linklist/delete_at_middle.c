#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;
void createlinklist(int n);
void deleteMiddleNode(int position);
void display();
int main()
{
    int n,data,position;
    printf("How many element you want to print\n");
    scanf("%d",&n);
    createlinklist(n);
    printf("Output\n");
    display();
    printf("\nEnter the node position you want to delete: ");
    scanf("%d", &position);
    deleteMiddleNode(position);
    display();
    return 0;
}
void createlinklist(int n)
{
    struct node *newnode,*temp;
    int data,i;
    head = (struct node*)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Linklist overflow\n");
    }
    else
    {
        printf("Enter the element\n");
        scanf("%d",&data);
        head->data=data;
        head->link = NULL;
        temp = head;

        for ( i = 2; i <=n; i++)
        {
            newnode = (struct node*)malloc(sizeof(struct node));
            if (newnode ==NULL)
            {
                printf("Linklist overflow\n");
            }
            else
            {
                printf("Enter the element\n");
                scanf("%d",&data);
                newnode->data=data;
                newnode->link=NULL;
                temp->link=newnode;
                temp = temp->link;
            }
            
            
        }
        
    }
}
void deleteMiddleNode(int position)
{
    int i;
    struct node *toDelete, *prevNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        prevNode = head;

        for(i=2; i<=position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->link;

            if(toDelete == NULL)
                break;
        }

        if(toDelete != NULL)
        {
            if(toDelete == head)
                head = head->link;

            prevNode->link = toDelete->link;
            toDelete->link = NULL;
            free(toDelete);

        }
        else
        {
            printf("Invalid position unable to delete.");
        }
    }
}
void display()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("Data-%d\n",temp->data);
            temp= temp->link;
        }
    }
}