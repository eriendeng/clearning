//
// Created by 邓永隽 on 2018/5/13.
//
#include "printf.h"
#include "stdbool.h"
#include "stdlib.h"

/*
 Array: same element type, every same part takes up same memory.
 advantage: fast to read and write
 disadvantage: slow to insert element, limit length.
               need a continous space/memory
               low effectioncy to insert and remove

  */

struct Array{
    int *pt; //the address of the array
    //setup the array
    int len;
    int cnt; //the num of avaliable ele.
};

//use _init mostly, which return static when arr_get() instead of `struct Array arr;`
void arr_init(struct Array *arr){
    // `*arr->pt` means `pt`element in the struct-var which the pt-var `*arr` points to
    arr->pt = (int *)malloc(sizeof(int));
    if (arr->pt == NULL){
        printf("error!\n");
    } else{
        arr->len = 1;
        arr->cnt = 0;
    }
    return;
};

bool arr_is_empty(struct Array *arr){
    if (arr->cnt == 0)return true;
    else return false;
};

bool arr_is_full(struct Array *arr){
    if (arr->cnt == arr->len)return true;
    else return false;
}

void arr_append(struct Array *arr, int num){
    //realloc动态分配
    if (arr_is_full(arr)){
        arr->pt = (int *)realloc(arr->pt, sizeof(int) * (arr->len+1));
        arr->pt[arr->len] = num;
        (arr->len)++;
        (arr->cnt)++;
    } else{
        arr->pt[arr->cnt] = num;
        (arr->cnt)++;
    }
    return;
};

bool arr_remove(struct Array *arr, int index ){
    if(arr->cnt <= index  || index < 0) return false;
    else{
        for (int i = index; i < arr->cnt; i++) arr->pt[i] = arr->pt[i+1];
        arr->cnt--;
        arr->len--;
        //free(&(arr->pt[arr->cnt-1]));
        //question: why dont i need to free the memory of arr->pt[arr->cnt-1] ?
        return true;
    }
};

void show_arr(struct Array *arr){
    int j = 0;
    if (arr_is_empty(arr)) printf("None!\n");
    else{
        printf("[");
        for (int i =0 ; i<(arr->cnt)-1; ++i){
            printf("%d,",arr->pt[j]);
            ++j;
        }
        printf("%d]\n",arr->pt[j]);
    }
}

int arr_get(struct Array *arr, int index){
    return arr->pt[index];
};

void arr_inverse(struct Array *arr){
    int i = 0;
    int j = arr->cnt-1;
    int t;
    while (i < j){
        t = arr->pt[i];
        arr->pt[i] = arr->pt[j];
        arr->pt[j] = t;
        ++i;
        --j;
    }
    return;
};

void arr_sort(struct Array *arr){
    for (int i = 0; i < arr->cnt; ++i){
        for (int j = i + 1; j < arr->cnt; ++j){
            if (arr->pt[i] > arr->pt[j]){
                int t = arr->pt[i];
                arr->pt[i] = arr->pt[j];
                arr->pt[j] = t;
            }
        }
    }
    return;
}



int main(void){

    struct Array *arr;
    arr_init(arr);
    show_arr(arr);
    arr_append(arr,1);
    arr_append(arr,2);
    arr_append(arr,3);
    arr_append(arr,4);
    show_arr(arr);
    printf("%d\n",arr_get(arr,2));
    arr_remove(arr,2);
    show_arr(arr);
    printf("%d\n",arr_get(arr,2));

    return 0;
}