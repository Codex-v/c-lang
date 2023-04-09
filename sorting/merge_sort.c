#include <stdio.h>

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
}

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    int first[len1], second[len2];


    for (int i = 0; i < len1; i++)
        first[i] = arr[s + i];
    
    for (int i = 0; i < len2; i++)
        second[i] = arr[mid + 1 + i];

    // Merge the two sorted arrays
    int index1 = 0;
    int index2 = 0;      
    int k = s;
    
    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[k++] = first[index1++];
        } else {
            arr[k++] = second[index2++];
        }
    }
    
    while (index1 < len1) {
        arr[k++] = first[index1++];
    }

    while (index2 < len2) {
        arr[k++] = second[index2++];
    }
}

void mergeSort(int *arr, int s, int e) {
    if (s >= e) {
        return;
    }

    int mid = (s + e) / 2;


    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main() {
    int arr[] = {10, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    printarr(arr, size);

    return 0;
}


