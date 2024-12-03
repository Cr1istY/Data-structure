/*
* ��̬˳���
* 
* 
* 

#include <stdio.h>

#define MAXSIZE 10 //������󳤶�

typedef struct {
	int data[MAXSIZE]; //�þ�̬������洢����Ԫ��
	int length; //˳���ĵ�ǰ����
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

// malloc �����ڴ�ռ�
// free �ͷ��ڴ�ռ�

/*
//��̬˳���

#include <stdio.h>
#include <malloc.h>

#define INITMAXSIZE 10

//����˳���
typedef struct {
	int* data;
	int Length;
	int MAXSIZE;
}SqList;

//��ʼ��˳���
void InitSqList(SqList *L)
{
	L->data = (int*)malloc(INITMAXSIZE * sizeof(int));
	L->Length = 0;
	L->MAXSIZE = INITMAXSIZE;
}

//��̬����˳�����
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
//��̬˳���

#include <stdio.h>
#include <malloc.h>

#define INITMAXSIZE 10

//����˳���
typedef struct {
	int* data;
	int Length;
	int MAXSIZE;
}SqList;

//��ʼ��˳���
void InitSqList(SqList *L)
{
	L->data = (int*)malloc(INITMAXSIZE * sizeof(int));
	//L->data[0] = 1;
	L->Length = 0;
	L->MAXSIZE = INITMAXSIZE;
}

//��̬����˳�����
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
	//realloc ����ɹ��Զ���pָ��NULL
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