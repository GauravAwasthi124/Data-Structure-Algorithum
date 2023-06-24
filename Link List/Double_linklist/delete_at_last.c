#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head,*last;
void createlist(int n);
void delete_at_last();
void display();
int main()
{
    int n;
    head=NULL;
    last = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    createlist(n);
    display();
    delete_at_last();
    printf("\nAfter deletion\n");
    display();
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
void delete_at_last()
{
    struct node *Delete;
    Delete = last;
    last = last->prev;
    last->next = NULL;
    free(Delete);
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