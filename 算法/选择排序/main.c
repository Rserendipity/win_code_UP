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

void selectSort(int* arr, int size)
{
	for (int i = 1; i < size; i++)
	{

	}
}

int main()
{
	int arr[] = { 4,2,3,6,1,8,7,9,5 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printArr(arr, size);

	selectSort(arr, size);

	printArr(arr, size);

	return 0;
}