#include<stdio.h>

int binarySearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
            return mid;
        if(key>arr[mid])
        {
            start = mid+1;
        }
        else
        {
            start = mid-1;
        }
    mid = (start+end)/2;

    }


    return -1;

}


void main()
{
    int even[] = {2,4,6,8,12,18};
    int odd[] = {3,8,11,14,16};

    printf(" founded %d",binarySearch(even,6,12));



}











