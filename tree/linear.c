#include<stdio.h>
#include<stdbool.h>

int search(int arr[],int n,int element)
{
   for(int i = 0;i<n;i++)
    if(arr[i]==element)
        return i;
    
    return 0;
}

void main()
{
    int arr[] ={5,7,8,9};
    int x = 7;
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = search(arr,n,x);
    printf("%d\n",result);


}

