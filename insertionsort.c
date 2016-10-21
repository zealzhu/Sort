/*
    插入排序的实现
    */

#include "sort.h"

void insertSort(int *arr) {
    int key;
    int i, j;
    for(i = 1; i < LENGTH; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];//右移一位
            j--;                //寻找上一个
        }
        arr[j + 1] = key;
    }
}
