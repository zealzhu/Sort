#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include <stdio.h>

#define INT_MAX 0X7FFFFFFF
#define LENGTH 10000				//数组长度

//归并排序
void mergeSort(int *arr, int p, int r);

//快速排序
void insertSort(int *arr);

//堆排序
void heapSort(int * arr);

//普通冒泡排序
void bubbleSort(int *arr);

//插入排序
void quickInsert(int * arr, int p, int r);

#endif // SORT_H_INCLUDED
