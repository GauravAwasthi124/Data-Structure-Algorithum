#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head;
void createlinklist(int n);
void deleteFirstNode();
void display();
int main()
{
    int n,data;
    printf("How many element you want to print\n");
    scanf("%d",&n);
    createlinklist(n);
    printf("Output\n");
    display();
    deleteFirstNode();
    printf("updated output\n");
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
void deleteFirstNode()
{
    struct node *toDelete;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        head = head->link;
        printf("\nData deleted = %d\n", toDelete->data);
        free(toDelete);
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