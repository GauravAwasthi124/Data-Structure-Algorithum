#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head,*last;
void createlist(int n);
void delete_at_middle();
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
    delete_at_middle();
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
void delete_at_middle()
{
    int position,i;
    struct node *temp;
    if (head==NULL)
    {
        printf("Linklist is empty");
    }
    else
    {
        temp=head;
        printf("Enter the position\n");
        scanf("%d",&position);
        for ( i = 1; i <position; i++)
        {
            temp=temp->next;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
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