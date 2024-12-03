#include <stdio.h>
#include <malloc.h>

#define INITMAXSIZE 5

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
	L->data[0] = 1;
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

//����  ��˳���L�ĵ�iλ����eԪ��
void ListInsert(SqList* L, int i, int e)
{
	IncreaseSize(L, 1);

	int j = L->Length - 1;

	for (j; j >= i; j--)
	{
		L->data[j] = L->data[j - 1];
	}

	L->data[i - 1] = e;

	//int* p = &L->data[i - 1];
	//L->data[i - 1] = e;
	//for (j = 0; j < L->Length - i; j++)
	//{
	//	L->data[i + j] = p[j];
	//}
	//
	//free(p);

}

//����˳���
void IntList(SqList* L)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= L->MAXSIZE; i++)
	{

		if (i == L->MAXSIZE)
		{
			printf("��������������������\n");
			scanf_s("%d", &j);
			if (j != 0 && j > 0)
			{
				IncreaseSize(L, j);
			}
			else
			{
				break;
			}
		}

		printf("����%dλ��ֵ��", i + 1);
		scanf_s("%d", &j);

		if (j < 0)
		{
			break;
		}
		else
		{
			L->data[i] = j;
			L->Length++;
		}
	}

}

//չʾ˳����е�����
void ShowList(SqList* L)
{
	int i = 0;
	for (i = 0; i < L->Length; i++)
	{
		printf("��%dλ��Ԫ��Ϊ�� %d\n", i + 1, L->data[i]);

	}


}

//ɾ����iλ��Ԫ��
void DelteList(SqList* L)
{
	int i = 0;
	int j = 0;
	
	printf("��������ɾ��Ԫ�ص�λ��\n");
	scanf_s("%d", &i);

	for (j = i - 1; j < L->Length - 1; j++)
	{
		L->data[j] = L->data[j + 1];
	}
	
	L->Length--;
}

int main(void)
{
	SqList L;
	InitSqList(&L);

	IntList(&L);

	DelteList(&L);

	ShowList(&L);

	return 0;
}