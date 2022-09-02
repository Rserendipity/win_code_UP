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
void insertSort(int* arr, int size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
			swap(&arr[j], &arr[j - 1]);
	}
}
int main() 
{
	int arr[] = { 4,2,3,6,1,8,7,9,5 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printArr(arr, size);

	insertSort(arr, size);

	printArr(arr, size);

	return 0;
}
