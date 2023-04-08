#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
}Node;

Node * NodeCreation(Node * root,int key)
{
    if(root != NULL)
    {   
        Node * newNode = (Node * )malloc(sizeof(Node));
        newNode->data = key;
        newNode->left = NULL;
        newNode->right = NULL;
    }

    return;
}

void preOrder(Node * root)
{
    if(root != NULL)
    {
        printf("Data : %d\n",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
    return;
}

void inOrder(Node * root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        printf("Data : %d\n",root->data);
        inOrder(root->right);
    }
}
void PostOrder(Node * root)
{
    if(root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("Data : %d\n",root->data);
    }

}

Node * isBST(Node * root)
{
    static Node * prev = NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
        return 1;

}


int main()
{
    

    return 0;
}