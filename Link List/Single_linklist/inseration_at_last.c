#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;           
    struct node *link;
}*head;


void createList(int n);
void insertNodeAtEnd(int data);
void displayList();

int main()
{
    int n, data;
    printf("How many element you want to print in linklist\n");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list \n");
    displayList();
    printf("\nEnter data to insert at end of the list: \n");
    scanf("%d", &data);
    insertNodeAtEnd(data);
    printf("\nData in the list \n");
    displayList();
    return 0;
}

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Memory can not allocate");
    }
    else
    {
        printf("Enter the data for an linklist\n");
        scanf("%d", &data);
        head->data = data;
        head->link = NULL;
        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("memory can't allocate\n");
                break;
            }
            else
            {
                printf("Enter the data for an linklist\n");
                scanf("%d", &data);

                newNode->data = data;
                newNode->link = NULL; 
                temp->link = newNode;
                temp = temp->link; 
            }
        }
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
void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("No memory\n");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data-%d\n", temp->data); 
            temp = temp->link;              
        }
    }
}