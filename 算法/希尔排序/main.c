#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void printArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void shellSort(int* arr, int size)
{
    int i, j, inc;
    for (inc = size / 2; inc > 0; inc /= 2)
    {
        for (i = inc; i < size; i++)
        {
            for (j = i; j >= inc && arr[j] < arr[j - inc]; j -= inc)
                swap(&arr[j], &arr[j - inc]);
        }
    }
}

int main() 
{
    int arr[] = { 4,2,3,6,1,8,7,9,5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    shellSort(arr, size);

    printArr(arr, size);

    return 0;
}
