#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;  //self refrenceing structure
    struct Node *right; //self refrenceing structure
}Node;


Node * Nodecreation(int data)
{
    Node *newNode;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preOrder(Node *root)
{
    if(root != NULL)
    {
        printf("data : %d\n",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
        return;
}

void main()
{ 
    // //root node
    // Node *root,*p1,*p2; 
    // root = (Node *)malloc(sizeof(Node));
    // p1 = (Node *)malloc(sizeof(Node));
    // p2 = (Node *)malloc(sizeof(Node));
    // root->data = 78;
    // root->left=p1;
    // root->right=p2;


    // //parent 1 node
    // p1->left = NULL;
    // p1->right = NULL;
    // p1->data = 4;

    // //parent 2 Node
    // p2->data = 5;
    // p2->left = NULL;
    // p2->right = NULL;

    

    // // printf("data : %d",root->left->left);

    Node *root = Nodecreation(45);
    Node *p1 = Nodecreation(89);
    Node *p2 = Nodecreation(96);

    root->left = p1;
    root->right = p2;
    preOrder(root);








}