//Doubly linked list sort using bubble sort 
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void printDLL(struct Node* head)
{
    struct Node* temp=head;
    printf("\n");
    while(temp->next!=NULL)
    {
        printf(" %d --> ",temp->data);
        temp=temp->next;
    }
    printf(" %d --> NULL\n",temp->data);
}
void sortDLL(struct Node* head)
{
    printf("\n---sort the linked list---\n");
    for (struct Node* t1=head;t1->next!=NULL;t1=t1->next)
    {
        for (struct Node* t2=t1->next;t2!=NULL;t2=t2->next)
        {
            if (t1->data > t2->data)
            {
                int f=t1->data ;
                t1->data=t2->data;
                t2->data=f;
            }
        }
    }
}
void main()
{
    struct Node* head=NULL;
    struct Node* tail=NULL;
    int n,d;
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
    printDLL(head);
    sortDLL(head);
    printDLL(head);
}

/*
 Enter n : 6

 Enter Data for node 1 : 15

 Enter Data for node 2 : 2

 Enter Data for node 3 : 1

 Enter Data for node 4 : 3

 Enter Data for node 5 : 6

 Enter Data for node 6 : 4

 15 -->  2 -->  1 -->  3 -->  6 -->  4 --> NULL

---sort the linked list---
 1 -->  2 -->  3 -->  4 -->  6 -->  15 --> NULL

*/
