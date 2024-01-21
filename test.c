#include"SList.h"


int main()
{
	
	SLTNode*phead=NULL;
	SLTPushBack(&phead,1);
	SLTPushBack(&phead,2);
	SLTPushBack(&phead,3);
	SLTNode *tmp=SLTFind(&phead,2);
	SLTInsertBack(&phead, tmp, 4);
	//SLTPrint(phead);
	SLTPopBack(&phead);
	SLTPopBack(&phead);
	//SLTPopBack(&phead);
	//SLTEraseAfter( SLTFind(&phead, 1));
	SLTPrint(phead);
	SLTDestroy(&phead);
	return 0;
}







