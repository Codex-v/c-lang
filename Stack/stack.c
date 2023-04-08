#include<stdio.h>
#include<stdbool.h>
#define size 5
int arr[size];
int top = -1;

bool isFull()
{
    if(top==size-1)return true;
    return false;
}
bool isEmpty()
{
    if(top==-1)return true;
    return false;
}

void push(int data)
{
    if(isFull())
        printf("Stack is overflow\n");
    else
    {
        top = top +1;
        arr[top] = data;
        
    }
}
void pop()
{

    if(isEmpty())
        printf("Stack is underflow\n");
    else
    {
        printf("Pop element was %d\n",arr[top]);
        top = top -1;
    }
}

void display()
{

if(isEmpty())
{
        printf("Stack is underflow\n");

}
else
{
    for(int i = top;i>=0;i--)
        printf("element %d\t",arr[i]);
}


}

void main()
{

push(89);
push(59);
push(79);
display();

}