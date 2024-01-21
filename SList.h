#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//����������
typedef struct SListNode
{
	int n;
	struct SListNode* next;
}SLTNode;

typedef int SLTDateType;

//��ӡ
void SLTPrint(SLTNode*phead);


//����ռ�
SLTNode* SLTBuyNode(SLTDateType x);


//ͷ��
void SLTPushFront(SLTNode**pphead,SLTDateType x );


//β��
void SLTPushBack(SLTNode** pphead,SLTDateType x);

//ͷɾ
void SLTPopFront(SLTNode** pphead);

//βɾ
void SLTPopBack(SLTNode** pphead);

//����
SLTNode* SLTFind(SLTNode** pphead, SLTDateType x);

//ָ��λ��֮ǰ����ָ������
void SLTInsertFront(SLTNode** pphead, SLTNode* pos, SLTDateType x);

//�ض�λ��֮�����ָ������
void SLTInsertBack(SLTNode**pphead,SLTNode* pos, SLTDateType x);

//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos);

//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos);

//��������
void SLTDestroy(SLTNode** pphead);