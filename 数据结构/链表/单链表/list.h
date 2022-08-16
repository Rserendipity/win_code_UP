#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>

// 节点的定义
typedef struct Node {
	// 数据域
	int data;
	// 指针域
	struct Node* next;
} Node;

// 链表的定义
typedef struct List {
	// 头指针
	Node* head;
	// 尾指针
	Node* tail;
	// 记录数量
	int size;
} List;

// 初始化
List* listInit();

// 增删改查

// 头插法
void listPushHead(List* list, int data);
void listPopHead(List* list);

// 尾插法
void listPushTail(List* list, int data);
void listPopTail(List* list);

// 指定位置插入元素
void listPushByPos(List* list, int pos, int data);

// 查找
void listFind(List* list, int findNum);

// 修改
void listRevise(List* list, int value, int num);

// 打印函数
void listPrint(List* list);

// 销毁
void delList(List* list);

#endif 
