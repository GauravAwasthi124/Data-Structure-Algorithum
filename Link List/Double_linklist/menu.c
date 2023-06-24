#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev; 
}*head,*last;
void createlist(int n);
void insert_at_begin();
void insert_at_middle(int position);
void insert_at_last();
void deletion_at_begin();
void delete_at_middle(int position);
void delete_at_last();
void display();
int main()
{
    while (1)
    {

    int n,data,select,position;
    printf("Press 1 Insertion at begin\nPress 2 for Insertion at Index\nPress 3 for Insertion at last\n");
    printf("Press 4 Deletion at begin\nPress 5 for Deletion at Index\nPress 6 for Deletion at last\n");
    printf("Press 7 for Display\nPress 8 for exit\n");
    scanf("%d",&select);
    switch (select)
    {
    case 1:   
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlist(n);
        insert_at_begin();
        break;
    case 2:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlist(n);
        printf("Enter the position\n");
        scanf("%d",&position);
        if (position==1)
        {
            insert_at_begin();
        }
        else if (position==n)
        {
            insert_at_last();
        }
        else
        {
            insert_at_middle(position);
        }
        break;
    case 3:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlist(n);
        insert_at_last();
        break;
    case 4:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlist(n);
        deletion_at_begin();
        break;
    case 5:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlist(n);
        printf("Enter the position\n");
        scanf("%d",&position);
        if (position==1)
        {
            deletion_at_begin();
        }
        else if (position==n)
        {
            delete_at_last();
        }
        else
        {
            delete_at_middle(position);
        }
        break;
    case 6:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlist(n);
        delete_at_last();
        printf("\nAfter Deletion of element at last\n");
    case 7:
        display();
    case 8:
        exit(1);
        break;
    }
    }
    return 0;
}
void createlist(int n)
{
    int i,data;
    struct node *New;
    
        head = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&data);
        head->data = data;
        head->next=NULL;
        head->prev=NULL;

        last = head;
        for(i=2;i<=n;i++){
            New = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data:");
            scanf("%d",&data);


            New->data = data;
            New->next = NULL;
            New->prev = last;
            last->next = New;
            last = New;
        }
}
void display()
{
    struct node *temp;
    if (head==NULL)
    {
        printf("linklist is empty");
    }
    else{
        temp=head;
        while (temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void insert_at_begin()
{
    int data;
    struct node *New = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data:");
    scanf("%d",&data);
    if (head==NULL)
    {
        printf("linklist is empty");
    }
    else{
        New->data = data;
        New->next = head;
        New->prev = NULL;
        head->prev = New;
        head=New;
    }
}
void insert_at_middle(int position)
{
    int data,i;
    struct node *New,*temp;
    New = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&data); 
    temp= head;
    New->data = data;
    New->next=NULL;
    New->prev = NULL;
    for ( i = 1; i <position-1; i++)
    {
        temp = temp->next;
    }
    temp->next->prev = New;
    New->next=temp->next;
    temp->next=New;
    New->prev = temp;
}
void insert_at_last()
{
    int data;
    struct node * New = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to be inserted: ");
    scanf("%d", &data);
    if (head==NULL)
    {
        printf("linklist is empty");
    }
    else
    {
        New->data = data;
        New->prev = last;
        New->next = NULL;
        last->next = New;
        last = New;
    }
}
void deletion_at_begin()
{
    struct node *Delete;
    Delete = head;
    head = head->next;
    head->prev = NULL;
    free(Delete);
}
void delete_at_middle(int position)
{
    int i;
    struct node *temp;
    if (head==NULL)
    {
        printf("Linklist is empty");
    }
    else
    {
        temp=head;
        for ( i = 1; i <position; i++)
        {
            temp=temp->next;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
}
void delete_at_last()
{
    struct node *Delete;
    Delete = last;
    last = last->prev;
    last->next = NULL;
    free(Delete);
}