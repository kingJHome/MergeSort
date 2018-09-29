#ifndef _MYMERGE_SORT
#define _MYMERGE_SORT

#define LT(a,b) ((a) < (b))
#define LQ(a,b) ((a) <= (b))
#define GT(a,b) ((a) > (b))

typedef struct{
	int *array;
	int length;
}SqList;

//归并操作
void Merge(SqList source,int i,int m,int alen);

//递归归并
void MSort(SqList prev,int start,int end);

//调用归并操作
void MergeSort(SqList sql);
#endif
