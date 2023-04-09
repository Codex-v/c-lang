#include<stdio.h>


void swap(int *a,int*b)
{
    *b = (*a+*b)-(*a=*b);
}
void selectionSort(int *arr,int n)
{
    int min_idx;
    for(int i  = 0;i<n-1;i++)
    {
        min_idx = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[min_idx] > arr[j])
                min_idx = j;
        }
        swap(&arr[min_idx],&arr[i]);

    }        

}

void printarr(int arr[],int n)
{
    for(int i = 0;i<n;i++)
        printf("%d\t",arr[i]);
}

void main()
{
int arr[] = {10,2,3,4,5};
int size = sizeof(arr)/sizeof(arr[0]);

selectionSort(arr,size);

printarr(arr,size);



}