#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{

    int data;
    struct Node *left;
    struct Node *right;


}Node;


Node *Nodecreation(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

}


void preOrder(Node *root)
{
    if(root != NULL)
    {
        printf("Data : %d\t",root->data);
        preOrder(root->left);
        preOrder(root->right);

    }
    return;

}

void postOrder(Node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("Data : %d\t",root->data);
        
    }
    return;

}

void inOrder(Node *root)
{
    if(root !=NULL)
    {
        inOrder(root->left);
        printf("Data : %d\n",root->data);
        inOrder(root->right);

    }
    return;
}

/*
        5
       / \
      3   6
     / \
    1  4

*/


int isBST(Node *root)
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

Node * search(Node *root,int key)
{
    if(root == NULL)
        return NULL;
    if(root->data == key)
        return root;
    else if(key<root->data)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }
}

Node * SearchIter(Node * root,int key)
{
    while (root !=NULL)
    {
    if(key == root->data)
        return root;
    else if(key<root->data)
    {
        root  = root->left;
        
    }
    else
    {
        root = root->right;
    }

    }
    return NULL;
    

}

Node * insertion(Node * root,int key)

{   Node * prev = NULL;
    Node * newNode;
    while (root!= NULL)
    {   
        prev = root;
        if(root->data == key)
            printf("cannot insert key is avaiable");
            return;
        else if(key<root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    newNode = Nodecreation(key);
    if(prev->data > key)
    {
        prev->right = newNode;
    }
    else
    {
        prev->left = newNode;
    }

}


/*

Insertion in a binary search Tree

In BST -> No duplicates are allowed

allocate dynamic memeory 
-> search the key in the BST
-> find the postion to insert the key
->  need extra pointer to connect
-> 

pseducode

void insert(Node * root,int key)
{
    Node * prev = NULL
    Node *newNode;
    while(root != NULL)
    {
        prev = root;
        if(key == root->data)
            printf("key is already avaiabled");
        else if(key<root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }

    }

    Node * newNode = Nodecreation(key);
    if(key < prev->data)
    {
        prev->left = newNode;
    }
    else
    {
        prev->right = newNode;
    }



}





*/

void main()
{
    Node *root = Nodecreation(5);
    Node *pL = Nodecreation(3);
    Node *pR = Nodecreation(6);
    Node *ppL = Nodecreation(1);
    Node *ppR = Nodecreation(4);

    root->left = pL;
    root->right = pR;
    pL->left = ppL;
    pL->right = ppR;


    // inOrder(root);
    // printf("%d",isBST(root));
    Node * element = SearchIter(root,6);
    printf("address of the pointer %d",element);


}



