#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;


}Node;



Node *temp,*newNode,*head;

void nodecreation()
{
    int data;
    printf("Enter the data: ");
    scanf("%d",&data);
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    if(head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
        temp = newNode;

    }
    else
    {
        temp->next = newNode;
        newNode->next = NULL;
        temp = newNode;
    }
}

void insertAtfirst()
{
    int data;
    printf("Enter the data insertAtfirst: ");
    scanf("%d",&data);
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    temp = newNode;
}

void deltionAtfirst()
{
    temp = head;
    head = head->next;
    free(temp);
}
void deletionAtmid(int index)
{
    temp = head;
    Node *q = temp->next;
    for (int i = 1; i != index-1; i++)
    {
        temp = temp->next;
        q = q->next;
    }
    temp->next = q->next;
    free(q);


}

void insertAtmid(int index)
{
    int data;
    temp = head;
    printf("Enter the data for insertAtmid:\n ");
    scanf("%d",&data);
    newNode = (Node *)malloc(sizeof(Node));   
    for (int i = 1; i!=index-1; i++)
    {
        temp = temp->next;
    }
    newNode->data = data;
    newNode->next = temp->next;
    temp->next = newNode;
    temp = newNode; 
}


void insertAtend()
{
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    int data;
    printf("Enter the data for insertAtend");
    scanf("%d",&data);
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    temp->next = newNode;
    temp = newNode;
    
}

void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf("Element %d\t",temp->data);
        temp = temp->next;
    }
    


}



void main()
{
    
printf("How many nodes u want to create ?");
int nodes;
scanf("%d",&nodes);
for (int i = 0; i < nodes; i++)
{
    nodecreation();
}
// insertAtmid(2);
// insertAtend();
deletionAtmid(2);
display();




}