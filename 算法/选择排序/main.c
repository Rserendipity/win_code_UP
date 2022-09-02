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

void selectSort(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i; j < size; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&arr[min], &arr[i]);
		}
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