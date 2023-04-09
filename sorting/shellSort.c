#include <stdio.h>

void swap(int *a,int*b)
{
    *b = (*a+*b)-(*a=*b);
}

void shellSort(int *arr,int n)
{
    int gap,i,j;

    for(gap = n/2;gap > 0;gap /= 2)
    {
        for(i = gap;i<n;i++)
        {
            for(j = i-gap;j>=0;j-gap)
            {
                if(arr[j+gap]>arr[j])
                    break;
                else
                {
                    swap(&arr[j+gap],&arr[j]);
                }
                
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArray(arr, n);
    
    shellSort(arr, n);
    
    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}