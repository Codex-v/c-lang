#include<stdio.h>
#include<stdbool.h>
void swap(int *a,int*b)
{
    *b = (*a+*b)-(*a=*b);
}
void bubblesort(int *arr,int n) //time complexity is O(n2)
//space complexity O(1)
{
    for(int i = 0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j = 0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            printf("array is already sorted\n");
            break;
        }
    }
}

/*
best case -> already sorted O(n)

worst case O(n2)

*/

void printarr(int arr[],int n)
{
    for(int i = 0;i<n;i++)
        printf("%d\t",arr[i]);
}

void main()
{
int arr[] = {1,2,3,4,5};
int size = sizeof(arr)/sizeof(arr[0]);

bubblesort(arr,size);

printarr(arr,size);



}
