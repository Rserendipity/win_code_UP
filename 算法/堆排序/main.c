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

void heapfy(int* arr, int pos, int size)
{
	int max = pos;
	int lch = pos * 2 + 1;
	int rch = pos * 2 + 2;

	if (lch < size && arr[max] < arr[lch])
		max = lch;
	if (rch < size && arr[max] < arr[rch])
		max = rch;

	if (max != pos)
	{
		swap(&arr[max], &arr[pos]);
		heapfy(arr, max, size);
	}
}

void heapSort(int* arr, int size)
{
	// 建立大根堆
	for (int i = size / 2; i >= 0; i--)
	{
		heapfy(arr, i, size);
	}

	// 把第一个元素和当前的最后一个元素交换
	// 对第一个元素进行大根堆的检查
	for (int i = size - 1; i >= 0; i--)
	{
		swap(&arr[0], &arr[i]);
		heapfy(arr, 0, i);
	}
}

int main()
{
	int arr[] = { 4,2,3,16,1,8,7,9,5,4,17,40 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printArr(arr, size);

	heapSort(arr, size);

	printArr(arr, size);

	return 0;
}
