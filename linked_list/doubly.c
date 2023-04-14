#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;


Node *head,*newNode,*temp;

void display()
{
    temp = head;
    do
    {
        printf("element %d\n",temp->data);
        temp = temp->next;
        
    } while (temp != head);
    
}

void insertAtFirst(int data)
{
    temp = head;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = temp;
    newNode->prev = head;
    head = newNode;
    temp = newNode;
}

void insertAtmid(int data,int index)
{   
    temp = head;
    Node * tonext = head->next;

    for(int i = 1;i!=index-1;i++)
    {
        temp = temp->next;
        tonext = tonext->next;


    }

    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    tonext->prev = newNode;
    temp = newNode;


}



void NodeCreation(int data)
{
    if(head == NULL)
    {
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->prev = NULL;
        newNode->next = NULL;
        head = newNode;
        temp = newNode;
    }
    else
    {   
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->prev = temp;
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;

    }


}


void main()
{
    head = NULL;
    NodeCreation(89);
    NodeCreation(90);
    NodeCreation(47);
    insertAtmid(488,2);
    display();





}