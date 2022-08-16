#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

// 初始化
List* listInit()
{
	List* list = (List*)malloc(sizeof(List));
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
	return list;
}

// 增删改查

// 头插法
void listPushHead(List* list, int data)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = data;
	p->next = list->head;

	list->size += 1;

	if (list->tail == NULL)
		list->tail = p;


	list->head = p;
}
void listPopHead(List* list)
{
	if (list->size == 0)
		return;

	Node* temp = list->head->next;

	free(list->head);
	list->head = temp;
	list->size -= 1;
}

// 尾插法
void listPushTail(List* list, int data)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = data;
	p->next = NULL;

	list->tail->next = p;
	list->tail = p;
	list->size += 1;
}
void listPopTail(List* list)
{
	Node* temp = list->head;
	for (int i = 0; i < list->size - 2; i++)
		temp = temp->next;
	free(list->tail);
	list->tail = temp;
	list->tail->next = NULL;
	list->size -= 1;
}

// 指定位置插入元素
void listPushByPos(List* list, int pos, int data)
{
	if (pos >= list->size)
		return;

	Node* temp = list->head;

	for (int i = 0; i < pos; i++)
		temp = temp->next;

	Node* p = (Node*)malloc(sizeof(Node));
	p->data = data;

	p->next = temp->next;
	temp->next = p;
	list->size += 1;
}

// 查找
void listFind(List* list, int findNum)
{
	Node* temp = list->head;
	for (int i = 0; i < list->size; i++)
	{
		if (findNum == temp->data)
		{
			printf("Find it\n");
			return;
		}
		temp = temp->next;
	}
	printf("No Find\n");
}

// 修改
void listRevise(List* list, int value, int num)
{
	Node* temp = list->head;
	for (int i = 0; i < list->size; i++)
	{
		if (value == temp->data)
		{
			temp->data = num;
			printf("Revise success\n");
			return;
		}
		temp = temp->next;
	}
	printf("No Find\n");
}

// 打印
void listPrint(List* list)
{
	Node* temp = list->head;
	for (int i = 0; i < list->size; i++)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

// 销毁
void delList(List* list)
{
	if (list == NULL)
		return;
	Node* temp = list->head->next;
	for (int i = 0; i < list->size - 1; i++)
	{
		free(list->head);
		list->head = temp;
		temp = temp->next;
	}
	free(list->head);
	free(list);
}
