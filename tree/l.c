#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

Node *newNode,*temp;
Node * Nodecreation(int data)
{   
    if(root!=NULL)
    {
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
    }

}
void preOrder(Node * root)
{
    if(root!=NULL)
    {
        // root->left subtree -> right subtree
        printf("%d",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
    
}

void main()
{
    Node * root = Nodecreation(90);
    Node *p1 = Nodecreation(45);
    Node *p2  =  Nodecreation(95);
    //connection between root node and parent node
    root->left = p1;
    root->right = p2;

    preOrder(root);




}