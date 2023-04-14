#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node * next;
}Node;

Node *newNode,*head,*temp;

void insertAtfirst(int data)
{
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    temp = newNode;

}

void deletionAtfirst()
{
    temp = head;
    head = head->next;
    free(head);
}

void insertAtmid(int data,int index)
{
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    temp = head;
    for(int i = 1;i<index-1;i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    temp = newNode;
}
void deltetionAtmid(int index)
{
    temp = head;
    Node *todel = head->next;
    for(int i = 1;i<index-1;i++)
    {
        temp = temp->next;
        todel = todel->next;
    }
    temp->next = todel->next;
    free(todel);

}

void insertAtend(int data)
{
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next= NULL;
}

void deletionAtend()
{
    temp = head;
    Node *todel = head->next;
    while (todel->next != NULL)
    {
       temp = temp->next;
       todel = todel->next;
    }
    free(todel);
    temp->next =  NULL;


}

void Nodecreation(int data)
{
    if(head == NULL)
    {
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;
        head = newNode;
        temp = newNode;
    }
    else
    {
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }

}

void display(Node * head)
{
    if(head == NULL)
        return;
    
    printf("element %d\t",head->data);
    display(head->next);

}

void main()
{   

    Nodecreation(7);
    Nodecreation(9);
    Nodecreation(45);
    Nodecreation(63);

    insertAtmid(556,2);
    deltetionAtmid(3);
    insertAtend(789);
    insertAtend(789);
    deletionAtend();
    display(head);
    




}