/*
    归并排序的实现
    */
#include "sort.h"

//归并排序
void mergeSort(int *arr, int p, int r){
    int q;
    if(p < r) {
        q = p + (r - p) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}
//归并
void merge(int *arr, int p, int q, int r) {
    int k;
    int i , j;
    int n1, n2;
    int * arr1, * arr2;
    //计算两堆各自的长度
    n1 = q - p + 1 + 1;//3
    n2 = r - q + 1;//2
    //分配两个数组
    arr1 = (int *)malloc(sizeof(int) * n1);
    arr2 = (int *)malloc(sizeof(int) * n2);
    //两个数组赋值
    for(k = 0; k < n1 - 1; k++) {
        arr1[k] = arr[p + k];
    }
    arr1[k] = INT_MAX;//设置哨兵
    for(k = 0; k < n2 - 1; k++) {
        arr2[k] = arr[q + 1 + k];
    }
    arr2[k] = INT_MAX;//设置哨兵
    //重新赋值开始比较两个数组
    i = 0;
    j = 0;
    for(k = p; k < r + 1; k++) {
        //第一堆的数小于第二堆
        if(arr1[i] <= arr2[j]) {
            arr[k] = arr1[i++];
        }
        else {
            arr[k] = arr2[j++];
        }
    }
    free(arr1);
    free(arr2);
}
