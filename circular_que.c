#include<stdio.h>
#define size 10
int arr[size];
int front = -1;
int rear = -1;

int isFull()
{
    if((front == rear +1)||(front == 0&&rear==size-1)) return 1;
    return 0;
}

int isEmpty()
{
    if(front == -1)return 1;
    return 0;

}


void push(int data)
{

if (isFull())
    printf("Queue is overflow\n");
else
{
    if(front == -1)
        front =0;
    rear = (rear+1)%size;
    arr[rear] = data;

}


}

void pop()
{
if(isEmpty())
    printf("Queu is underflow\n");
if(front == rear)
{
    front = -1,rear = -1;
}
else
{
    printf("pop element was %d\n",arr[front]);
    front=(front+1)%size;

}


}

void display()
{
    if(isEmpty())
        printf("Queu is underFlow\n");
    else
    {
        for (int i = front; i != rear; i = (i+1)%size)
        {
           printf("Element %d\n",arr[i]);
        }
        
    }

}


void main()
{
    push(78);
    push(89);
    display();




}