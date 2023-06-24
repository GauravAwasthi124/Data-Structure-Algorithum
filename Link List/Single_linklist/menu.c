#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;
void createlinklist(int n);
void insert_at_beginning(int data);
void insertionatmiddle(int data,int position);
void insertNodeAtEnd(int data);
void deleteFirstNode();
void deleteMiddleNode(int position);
void deleteLastNode();
void display();
int main()
{
    while (1)
    {
    int n,data,select,position;
    printf("\nPress 1 Insertion at begin\nPress 2 for Insertion at Index\nPress 3 for Insertion at last\n");
    printf("Press 4 Deletion at begin\nPress 5 for Deletion at Index\nPress 6 for Deletion at last\n");
    printf("Press 7 for display\nPress 8 for exit\n");
    scanf("%d",&select);
    switch (select)
    {
    case 1:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlinklist(n);
        printf("Enter the data for insert\n");
        scanf("%d",&data);
        insert_at_beginning(data);
        break;
    case 2:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlinklist(n);
        printf("\nAt which position you want to print new node\n");
        scanf("%d",&position);
        printf("\nEnter the element you want to insert at middle\n");
        scanf("%d",&data);
        if (position==1)
        {
            insert_at_beginning(data);
        }
        else if (position==n)
        {
            insertNodeAtEnd(data);
        }
        else
        {
            insertionatmiddle(data,position);
        }
        break;
    case 3:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlinklist(n);
        printf("\nEnter data to insert at end of the list: \n");
        scanf("%d", &data);
        insertNodeAtEnd(data);
        break;
    case 4:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlinklist(n);
        deleteFirstNode();
        break;
    case 5:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlinklist(n);
        printf("\nEnter the node position you want to delete\n");
        scanf("%d", &position);
        deleteMiddleNode(position);
        break;
    case 6:
        printf("How many element you want to print\n");
        scanf("%d",&n);
        createlinklist(n);
        deleteLastNode();
    case 7:
        display();
        break;
    case 8:
        exit(1);
        break;
        }
    }
    return 0;
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
    for (int i=2; i <=position; i++)
    {
        if (newnode ==NULL)
        {
            printf("no memory\n");
        }
        else
        {
            newnode->link = temp->link;
            temp->link = newnode;
        }

    }
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
            printf("%d ",temp->data);
            temp= temp->link;
        }
    }
}
void insert_at_beginning(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Unable to allocate");
    }
    else
    {
        newnode->data = data;
        newnode->link=head; 
        head = newnode;
    }
}
void insertNodeAtEnd(int data)
{
    struct node *newNode, *temp;
    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("memory can't allocate\n");
    }
    else
    {
        newNode->data = data;
        newNode->link = NULL; 
        temp = head;
        while(temp != NULL && temp->link != NULL)
            temp = temp->link;

        temp->link = newNode;

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
void deleteLastNode()
{
    struct node *toDelete, *secondLastNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        secondLastNode = head;

        while(toDelete->link != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->link;
        }

        if(toDelete == head)
        {
            head = NULL;
        }
        else
        {
            secondLastNode->link = NULL;
        }

        free(toDelete);
    }
}