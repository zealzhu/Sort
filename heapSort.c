/*
    堆排序的实现
	*/
#include "sort.h"

#define PARENT(i) ((i + 1) / 2 - 1)		//父节点下标
#define LEFT(i) (2 * (i + 1) - 1)		    //左孩子下标
#define RIGHT(i) (2 * (i + 1))			    //右孩子下标

//堆大小
int heapSize;

//维护最大堆
//前提：根节点的子树都是最大堆
void maxHeadIsyY(int * arr, int root) {
	int largest;					//记录最大的节点下标
	int temp;						//临时变量
	int left = LEFT(root);			//左孩子下标
	int right = RIGHT(root);		//右孩子下标

	if(left < heapSize && arr[left] > arr[root]) {		//左节点比根节点大
		largest = left;									//此时root的值是最大的
	}else {
		largest = root;
	}

	if(right < heapSize && arr[right] > arr[largest]) {	//在继续用右节点和root比较是不是最大的
		largest = right;
	}
    //交换
    temp = arr[root];
    arr[root] = arr[largest];
    arr[largest] = temp;
	if(largest != root)				//如果最大的不是根节点，则子节点也需要继续维护
		maxHeadIsyY(arr, largest);
}

//建立最大堆
void buildMaxHeap(int * a) {
	int i;
	heapSize = LENGTH;//堆的大小为数组的大小
	for(i = LENGTH / 2 - 1; i >= 0; i--) {	//除叶节点外的节点自下向上的维护最大堆
		maxHeadIsyY(a, i);
	}
}

//堆排序
void heapSort(int * a) {
	int temp, i;
	buildMaxHeap(a);
	for(i = 1; i < LENGTH; i++) {
		temp = a[0];
		a[0] = a[heapSize - 1];
		a[heapSize - 1] = temp;	//根节点和最后一个叶子节点交换

		heapSize--;				        //堆长度减1
		maxHeadIsyY(a, 0);		//重新维护最大堆
	}
}
