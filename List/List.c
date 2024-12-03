/*
* 静态顺序表
* 
* 
* 

#include <stdio.h>

#define MAXSIZE 10 //定义最大长度

typedef struct {
	int data[MAXSIZE]; //用静态的数组存储数据元素
	int length; //顺序表的当前长度
}SqList;

void InitList(SqList* L)
{
	for (int i = 0; i < MAXSIZE; i++)
	{
		L->data[i] = 0;
	}
	L->length = 0;
}

int main(void)
{
	SqList L;

	InitList(&L);

	for (int i = 0; i < MAXSIZE; i++)
		printf("%d", L.data[i]);



	return 0;
}

*/

// malloc 申请内存空间
// free 释放内存空间

/*
//动态顺序表

#include <stdio.h>
#include <malloc.h>

#define INITMAXSIZE 10

//定义顺序表
typedef struct {
	int* data;
	int Length;
	int MAXSIZE;
}SqList;

//初始化顺序表
void InitSqList(SqList *L)
{
	L->data = (int*)malloc(INITMAXSIZE * sizeof(int));
	L->Length = 0;
	L->MAXSIZE = INITMAXSIZE;
}

//动态增加顺序表长度
void IncreaseSize(SqList* L, int len)
{
	int* p = L->data;
	int i = 0;
	L->data = (int*)malloc(sizeof(int) * (L->MAXSIZE + len));
	for (i = 0; i < L->Length; i++)
	{
		L->data[i] = p[i];
	}
	L->MAXSIZE = L->MAXSIZE + len;
	free(p);
}




*/

/*
//动态顺序表

#include <stdio.h>
#include <malloc.h>

#define INITMAXSIZE 10

//定义顺序表
typedef struct {
	int* data;
	int Length;
	int MAXSIZE;
}SqList;

//初始化顺序表
void InitSqList(SqList *L)
{
	L->data = (int*)malloc(INITMAXSIZE * sizeof(int));
	//L->data[0] = 1;
	L->Length = 0;
	L->MAXSIZE = INITMAXSIZE;
}

//动态增加顺序表长度
void IncreaseSize(SqList* L, int len)
{
	int* p = L->data;
	int i = 0;
	L->data = (int*)realloc(p, (L->MAXSIZE + len) * sizeof(int));
	//L->data[0] = 2;
	//L->data = (int*)malloc(sizeof(int) * (L->MAXSIZE + len));
	//for (i = 0; i < L->Length; i++)
	//{
	//	L->data[i] = p[i];
	//}
	L->MAXSIZE = L->MAXSIZE + len;
	//realloc 分配成功自动将p指向NULL
	//free(p);
}

int main(void)
{
	SqList L;
	InitSqList(&L);
	printf("%d, %d", L.data[0], L.MAXSIZE);
	IncreaseSize(&L, 5);
	printf("%d, %d", L.data[0], L.MAXSIZE);

	return 0;
}



*/