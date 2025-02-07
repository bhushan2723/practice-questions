#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
int n,d;
void printDLL(struct Node* head)
{
    struct Node* temp=head;
    printf("\n");
    int i=0;
    while(temp->next!=NULL && i<8)
    {
        printf(" %d --> ",temp->data);
        temp=temp->next;
        i++;
    }
    printf(" %d --> NULL",temp->data);
}
void checkCycle(struct Node* head)
{
    struct Node* slow=head;
    struct Node* fast=head->next;
    struct Node* s1=head;
    struct Node* s2=head;
    int flag=1;
    while(slow!=NULL || fast!=NULL)
    {
        if (slow==fast)
        {
            printf("\n Cycle exits..");
            flag=0;
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    if (flag==1)
    {
        printf("\n Cycle doen't exits....");
        return;
    }
    
     while(s1!=fast)
     {
         s1=s1->next;
         fast=fast->next->next;
     }
     printf("Cycle exits at %d , %u",s1->data,fast);
    
}
void main()
{
    struct Node* head=NULL;
    struct Node* tail=NULL;
    struct Node* e=NULL;
    
    printf("\n Enter n : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        struct Node* newnode=malloc(sizeof(struct Node));
        newnode->prev=NULL;
        newnode->next=NULL;
        printf("\n Enter Data for node %d : ",i);
        scanf("%d",&d);
        newnode->data=d;
        
        if (head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }
    for(int i=1;i<=4;i++)
    {
        
        struct Node* newnode=malloc(sizeof(struct Node));
        newnode->prev=NULL;
        newnode->next=NULL;
        printf("\n Enter Data for node %d : ",i);
        scanf("%d",&d);
        newnode->data=d;
        
        if (i==1)
        {
            e=tail;
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        } 
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }
    tail->next=e;
    printDLL(head);
    checkCycle(head);
    
}
