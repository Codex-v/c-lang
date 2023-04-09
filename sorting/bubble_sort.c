#include<stdio.h>

void swap(int *a,int*b)
{
    *b = (*a+*b)-(*a=*b);
}
void bubblesort(int *arr,int n)
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}

void printarr(int arr[],int n)
{
    for(int i = 0;i<n;i++)
        printf("%d\t",arr[i]);
}

void main()
{
int arr[] = {7,8,9,74,56,4987,5};
int size = sizeof(arr)/sizeof(arr[0]);

bubblesort(arr,size);

printarr(arr,size);



}
