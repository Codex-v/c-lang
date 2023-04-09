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

void postOrder(Node * root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\t",root->data);
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

// Node * search(Node *root,int key)
// {
//     if(root == NULL)
//         return NULL;
//     if(root->data == key)
//         return root;
//     else if(key<root->data)
//     {
//         return search(root->left,key);
//     }
//     else
//     {
//         return search(root->right,key);
//     }
// }

// Node * SearchIter(Node * root,int key)
// {
//     while (root !=NULL)
//     {
//     if(key == root->data)
//         return root;
//     else if(key<root->data)
//     {
//         root  = root->left;
        
//     }
//     else
//     {
//         root = root->right;
//     }

//     }
//     return NULL;
    

// }

// Node * insertion(Node * root,int key)

// {   Node * prev = NULL;
//     Node * newNode;
//     while (root!= NULL)
//     {   
//         prev = root;
//         if(root->data == key)
//             printf("cannot insert key is avaiable");
//             return;
//         else if(key<root->data)
//         {
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//     }
//     newNode = Nodecreation(key);
//     if(prev->data > key)
//     {
//         prev->right = newNode;
//     }
//     else
//     {
//         prev->left = newNode;
//     }

// }


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
    Node * root = Nodecreation(45);
    Node * p1 = Nodecreation(15);
    Node * p2 = Nodecreation(79);
    Node * c1_1 = Nodecreation(10);
    Node * c1_2 = Nodecreation(20);
    Node * c1_3 = Nodecreation(12);
    Node * c2_1 = Nodecreation(55);
    Node * c2_2 = Nodecreation(90);
    Node * c2_2_1 = Nodecreation(50);

    root->left = p1;
    root->right = p2;
    p1->left = c1_1;
    p1->right = c1_2;
    c1_2->left = c1_3;
    p2->left = c2_1;
    p2->right = c2_2;
    c2_2->left = c2_2_1;



    

// preOrder(root);
inOrder(root);


// 45, 15, 79, 90, 10, 55, 12, 20, 50

// 10 12 15 20 45 50 79 90

/*
      45
    /   \
   15   79    
   /\    /\ 
  10 20  55 90
     /      /
     12       50
  

*/



    // inOrder(root);
    // printf("%d",isBST(root));
    // Node * element = SearchIter(root,6);
    // printf("address of the pointer %d",element);


}



