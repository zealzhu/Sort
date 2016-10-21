#include "sort.h"
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
	int a[LENGTH] ;
	srand(time(NULL));
	//生成随机数
	for(i = 0; i < LENGTH; i++) {
        a[i] = rand() % 1000;
	}

	//堆排序
	//heapSort(a);

    //冒泡排序
    bubbleSort(a);

	//打印
	for(i = 0; i < LENGTH; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}


