#include <stdio.h>
#include "mergeSort.h"

void visitList(SqList sql,char *tip);

int main(int argc,char *argv[]){
	int arr[] = {7,8,2,5,9,10,13,14,18,9,3,0,20,18,16};
	SqList sql = {arr,15};
	visitList(sql,"归并排序\nbefore sort:");
	MergeSort(sql);
	visitList(sql,"after sort:");

	return 0;
}

void visitList(SqList sql,char *tip){
	printf("%s", tip);
	for(int i = 0; i < sql.length; ++i){
		printf("%-3d", sql.array[i]);
	}
	printf("\n");
}
