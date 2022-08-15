#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
//����������ϰ
void print(int arr[], int n);//��ӡ����ĺ���
int partition(int arr[], int l, int r);
void quicksort(int arr[], int head, int tail);

int main()
{
	int arr[100] = { 0 };
	int i = 0;
	int n = 0;
	while (scanf("%d", &n))//���벻�����ֵ�ʱ����˳�ѭ��
	{
		arr[i] = n;
		i++;
		if (i == 99)
		{
			break;
		}
	}
	print(arr, i);
	quicksort(arr, 0, i - 1);
	print(arr, i);
	return 0;
}

void print(int arr[], int n)//��ӡ����ĺ���
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void quicksort(int arr[], int head, int tail)
{
	if (head < tail)
	{
		int mid = partition(arr, head, tail);
		quicksort(arr, head, mid - 1);
		quicksort(arr, mid + 1, tail);
	}
}


int partition(int arr[], int l, int r)
{
	int temp = arr[l];
	while (l < r)
	{
		while (l < r && arr[r] > temp)
		{
			r--;
		}
		if (l < r)
		{
			arr[l] = arr[r];
			l++;
		}
		while (l < r && arr[l] <= temp)
		{
			l++;
		}
		if (l < r)
		{
			arr[l] = arr[r];
			r--;
		}

	}
	arr[l] = temp;
	return l;
}