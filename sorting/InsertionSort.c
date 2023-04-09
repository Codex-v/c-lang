#include<stdio.h>
void insertionSort(int *arr,int n)
{
    for(int i = 1;i<n;i++)
    {
        int j;
        int key = arr[i];
        for( j = i-1;j>=0;j--)
        {
            if(arr[j]>key)
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j+1] = key;
    }

}


void printarr(int arr[],int n)
{
    for(int i = 0;i<n;i++)
        printf("%d\t",arr[i]);
}

void main()
{
int arr[] = {10,2,3,4,5,4,0};
int size = sizeof(arr)/sizeof(arr[0]);

insertionSort(arr,size);

printarr(arr,size);



}