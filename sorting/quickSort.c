#include <stdio.h>

void swap(int *a,int *b)
{
    *b = (*a+*b)-(*a=*b);
}
int partition(int arr[],int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1;i<=e;i++)
    {
        if(pivot>=arr[i])   
            count++;
    }

    int pivotindex = s+count;
    swap(&arr[pivotindex],&arr[s]);

    // left and right
    int i = s;
    int j = e;
    while (i<pivotindex && j>pivotindex)
    {
        while (arr[i]<pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        
        if(i<pivotindex && j>pivotindex)
            swap(&arr[i++],&arr[j--]);
        
    }
    

    return pivotindex;

}
void quickSort(int arr[],int s,int e)
{
    //base case
    if(s>=e)
        return;
    
    int p = partition(arr,s,e);

    quickSort(arr,p+1,e);
    quickSort(arr,s,p-1);

}
void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
}


int main() {
    int arr[] = {10, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    printarr(arr, size);

    return 0;
}

