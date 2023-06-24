#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;
void createlinklist(int n);
void insertionatmiddle(int data,int position);
void display();
int main()
{
    int n,data,postion;
    printf("How many element you want to print in linklist\n");
    scanf("%d",&n);
    createlinklist(n);
    printf("output\n");
    display();
    printf("Enter the element you want to insert at middle\n");
    scanf("%d",&data);
    printf("At which position you want to print new node\n");
    scanf("%d",&postion);
    insertionatmiddle(data,postion);
    printf("output after insertion\n");
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
        printf("memory can not allocate");
    }
    else
    {
        printf("Enter the data for an linklist\n");
        scanf("%d",&data);
        head->data = data;
        head->link=NULL;
        temp = head;
        for ( i = 2; i <=n; i++)
        {
            newnode = (struct node*)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("memory can't allocate\n");
            }
            else
            {
                printf("Enter the data for an linklist\n");
                scanf("%d",&data);
                newnode->data = data;
                newnode->link = NULL;
                temp->link = newnode;
                temp = temp->link;
            }
        }
    }
}
void insertionatmiddle(int data,int position)
{
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("no memory\n");
    }
    else
    {
        newnode->data = data;
        newnode->link=NULL;
    }
        temp = head;
    for (int i=2; i <position; i++){
        temp = temp->link;
    }
            newnode->link = temp->link;
            temp->link = newnode;
}
void display()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("No memory\n");
    }
    else
    {
    temp = head;
        while (temp !=NULL)
        {
        printf("data-%d\n",temp->data);
        temp=temp->link;
        }
    }
    
}