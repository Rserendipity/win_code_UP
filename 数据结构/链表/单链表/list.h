#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>

// �ڵ�Ķ���
typedef struct Node {
	// ������
	int data;
	// ָ����
	struct Node* next;
} Node;

// ����Ķ���
typedef struct List {
	// ͷָ��
	Node* head;
	// βָ��
	Node* tail;
	// ��¼����
	int size;
} List;

// ��ʼ��
List* listInit();

// ��ɾ�Ĳ�

// ͷ�巨
void listPushHead(List* list, int data);
void listPopHead(List* list);

// β�巨
void listPushTail(List* list, int data);
void listPopTail(List* list);

// ָ��λ�ò���Ԫ��
void listPushByPos(List* list, int pos, int data);

// ����
void listFind(List* list, int findNum);

// �޸�
void listRevise(List* list, int value, int num);

// ��ӡ����
void listPrint(List* list);

// ����
void delList(List* list);

#endif 
