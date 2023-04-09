#include<stdio.h>

int linearSearch(int size,int key,int arr[])
{
    for(int i = 0;i<size;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}
/*
Linear search 
Time complxity

best case O(1)

Avarage case in between

worst case O(n)

Space complxity

const O(1)

*/


void main()
{

int arr[] = {1,2,8,9,4};
int size = sizeof(arr)/sizeof(arr[0]);
int key = 8;

printf("founded on index : %d",linearSearch(size,key,arr));


}

