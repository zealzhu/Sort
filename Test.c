#include "sort.h"
#include <stdlib.h>
#include <time.h>

void printArr(int * arr) {
	int i;
	//打印
	for(i = 0; i < LENGTH; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int i;
	int arr[LENGTH] ;
	srand(time(NULL));
	//生成随机数
	for(i = 0; i < LENGTH; i++) {
		arr[i] = rand() % 10000;
	}
	//printArr(arr);

	//堆排序
	//heapSort(arr);

	//冒泡排序
	//bubbleSort(arr);

	//快速排序
	quickInsert(arr, 0, LENGTH - 1);

	printArr(arr);
}



