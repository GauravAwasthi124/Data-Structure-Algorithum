#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * link;
}*head;
void createList(int n);
void insertAtBeginning(int data);
void insertAtN(int data, int position);
void delete_at_begin();
void deletion_at_middle(int position);
void Deletion_at_Last();
void displayList();
int main()
{
    while(1){
        int n,data,select,position;
    printf("Press 1 Insertion at begin\nPress 2 for Insertion at Index\n");
    printf("Press 3 Deletion at begin\nPress 4 for Deletion at Index\nPress 5 for Deletion at last\nPress 6 For Display\n");
    printf("Press 7 for exit\n");
    scanf("%d",&select);
    switch (select)
    {
    case 1:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createList(n);;
        printf("Enter the data you want to insert\n");
        scanf("%d",&data);
        insertAtBeginning(data);
        break;
    case 2:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createList(n);;
        printf("Enter the position\n");
        scanf("%d",&position);
        printf("Enter the data you want to insert\n");
        scanf("%d",&data);
        if (position==1)
        {
            insertAtBeginning(data);
        }
        else
        {
            insertAtN(data,position);
        }
        break;
    case 3:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createList(n);;
        delete_at_begin();
        break;
    case 4:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createList(n);
        printf("Enter the position\n");
        scanf("%d",&position);
        deletion_at_middle(position);
        break;
    case 5:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createList(n);;
        Deletion_at_Last();
        break;
    case 6:
            displayList();
            break;
    case 7: exit(1);
            
    default:
        printf("Exit");
        break;
    }
    }
    
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
void deletion_at_middle(int position)
{   
    struct node *temp,*delete;
    if (head==NULL)
    {
        printf("Linklist is empty");
    }
    else
    {
        temp=head;
        for (int i = 1; i < position-1; i++)
        {
            temp=temp->link;
        }
        delete=temp->link;
        temp->link=delete->link;
        free(delete);
        delete=NULL;
        
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