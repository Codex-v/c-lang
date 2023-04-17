#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 10
int arr[size];
int front = 0;
int rear = 0;


int isEmpty()
{
    if(front == rear)return 1;
    return 0;
}
int isFull()
{
    if(rear == size-1)return 1;
    return 0;
}


void push(int data)
{
    if(isFull())
        printf("Queue is full\n");
    else
    {
        arr[rear] = data;
        rear++;
    }
}
int pop()
{
    if(front == rear)
        printf("Queue is empty\n");

    else
    {
        return arr[front++];
    }
}

void display()
{
    if(front == 0)
        printf("Queue is empty\n");
    else
    {
        for(int i = front;i<=rear;i++)
        {
            printf("Element %d\t",arr[i]);
        }

    }
}

//bfs implimatation


void main()
{

    int u;
    int i = 0;
    int visited[7] = {0,0,0,0,0,0,0};
    int a[7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}

    };
    printf("%d",i);
    visited[i] = 1;
    push(i); //enqueu i for exploration

    while (!isEmpty())
    {
        int node = pop();
        for (int j = 0; j < 7; j++)
        {
            if(a[node][j]==1&&visited[j]==0)
            {
                printf("%d",j);
                visited[j]=1;
                push(j);
            }
        }
        
    }
    


}