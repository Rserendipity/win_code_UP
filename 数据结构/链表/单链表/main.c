#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

void test1()
{
	List* list = listInit();

	listPushHead(list, 1);
	listPushHead(list, 2);
	listPushHead(list, 3);
	listPushHead(list, 4);
	listPushHead(list, 5);

	listPrint(list);

	listPopHead(list);
	listPopHead(list);

	listPrint(list);

	listPopTail(list);
	listPopTail(list);

	listPrint(list);

	listPushTail(list, 10);
	listPushTail(list, 20);

	listPrint(list);

	delList(list);
}

void test2()
{
	List* list = listInit();

	listPushHead(list, 1);
	listPushHead(list, 2);
	listPushHead(list, 3);
	listPushHead(list, 4);
	listPushHead(list, 5);

	listPrint(list);

	listPushByPos(list, 2, 10);

	listPrint(list);

	delList(list);

}

void test3()
{
	List* list = listInit();

	listPushHead(list, 1);
	listPushHead(list, 2);
	listPushHead(list, 3);
	listPushHead(list, 4);
	listPushHead(list, 5);

	listPrint(list);

	listFind(list, 5);
	listFind(list, 7);

	listRevise(list, 5, 10);
	listRevise(list, 2, 20);

	listPrint(list);

	delList(list);
}
int main()
{
	// test1();
	// test2();
	test3();
	return 0;
}