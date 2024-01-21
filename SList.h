#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//创建单链表
typedef struct SListNode
{
	int n;
	struct SListNode* next;
}SLTNode;

typedef int SLTDateType;

//打印
void SLTPrint(SLTNode*phead);


//申请空间
SLTNode* SLTBuyNode(SLTDateType x);


//头插
void SLTPushFront(SLTNode**pphead,SLTDateType x );


//尾插
void SLTPushBack(SLTNode** pphead,SLTDateType x);

//头删
void SLTPopFront(SLTNode** pphead);

//尾删
void SLTPopBack(SLTNode** pphead);

//查找
SLTNode* SLTFind(SLTNode** pphead, SLTDateType x);

//指定位置之前插入指定数据
void SLTInsertFront(SLTNode** pphead, SLTNode* pos, SLTDateType x);

//特定位置之后插入指定数据
void SLTInsertBack(SLTNode**pphead,SLTNode* pos, SLTDateType x);

//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos);

//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos);

//销毁链表
void SLTDestroy(SLTNode** pphead);