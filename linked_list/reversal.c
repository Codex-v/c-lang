#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

}Node;


static int count;
void display(Node * head)
{

    if(head == NULL)
        return;

    printf("element %d\n",head->data);
    display(head->next);
    count++;
}

Node *head,*temp,*newNode;

void nodecreation1(int data)
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

void reverse()
{
    Node *prev = NULL;
    Node *next = NULL;
    Node *current = head;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    
}

void main()
{
head = NULL;

nodecreation1(4);
nodecreation1(74);
nodecreation1(46);
nodecreation1(14);

// display(head);
reverse();
display(head);



}
