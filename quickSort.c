#include "sort.h"

//left small than arr[r] and right big than arr[r]
int partition(int * arr, int p, int r) {
	int k = arr[r];			//作为基准元素
	int position = p - 1;	//基准元素将来的位置
	int i;					//循环
	int temp;				//交换的临时变量	
	//最后一个不用比
	for(i = p; i < r; i++) {
		if(arr[i] <=  k) {			//如果比基准元素小，那么位置+1并交换
			position++;
			temp = arr[i];
			arr[i] = arr[position];
			arr[position] = temp; 
		}
	}
	position++;
	//交换
	arr[r] = arr[position];
	arr[position] = k;
	return position;
}

void quickInsert(int * arr, int p, int r) {
	int q;	
	if(p < r) {
		q = partition(arr, p, r);
		quickInsert(arr, p, q - 1);
		quickInsert(arr, q + 1, r);
	}
}
