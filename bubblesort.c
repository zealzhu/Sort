/*
    冒泡排序与改进版冒泡排序
    */
#include "sort.h"

//普通冒泡排序
void bubbleSort(int *arr) {
    int i , j;
    int temp;

    for(i = 0; i < LENGTH; i++) {
        for(j = 0; j < LENGTH - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//g

