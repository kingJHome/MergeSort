#include "mergeSort.h"

void exchangeData(int *arr,int i,int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void Merge(SqList source,int start,int mid,int end){
	int nlen = end - start,
		startPos = start,
		endPos = mid,
		sortPos = 0,
		arr[end-start];

	while( startPos<mid && endPos<end ){
		if( LQ(source.array[startPos],source.array[endPos]) ){
			arr[sortPos++] = source.array[startPos++];
		}else{
			arr[sortPos++] = source.array[endPos++];
		}
	}

	while( startPos < mid ){
		arr[sortPos++] = source.array[startPos++];
	}

	while( endPos <= end ){
		arr[sortPos++] = source.array[endPos++];
	}

	for(int i = 0; i < nlen; ++i){
		source.array[i+start] = arr[i];
	}
}

void MSort(SqList prev,int start,int end){
	if( end - start == 1 ){
		return;
	}else if( end - start == 2 ){
		if( GT(prev.array[start],prev.array[start+1]) ){
			exchangeData(prev.array, start, start+1);
		}
	}else{
		int mid = (start + end) / 2;
		
		MSort(prev,start,mid);
		MSort(prev,mid,end);
		Merge(prev,start,mid,end);
	}
}

void MergeSort(SqList sql){
	MSort(sql,0,sql.length);
}
