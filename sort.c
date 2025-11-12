#include "sort.h"

int check(int *arr, int size){
    int res = 1;
    for(int i = 0; i < size-1; i++){
        if(arr[i] < arr[i+1]) res = 1;
        if(arr[i] > arr[i+1]) return res = 0;
        else res = 1;
    }
    return res;
}

int fill_array(int *arr, int size){
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
    return 0;
}

int bubble_sort(int *arr, int size){
    int temp = 0;
    int end = 1;
    while(end){
        end = 0;
        for(int i = 0; i < size-1; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                end = 1;
            }
        }
    }
    return 0;
}



int bogo_sort(int *arr, int size){
    srand(time(NULL));
    int temp = 0;
    int j = 0;
    for(int i = 0; !(check(arr, size)); i = rand() % size){
        j = rand() % size;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return 0;
}

int selection_sort(int *arr, int size){
    int temp = 0;
    int min = 0;
    for(int i = 0; i < size; i++){
        min = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[min]){
                temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
            }
        }
    }
    return 0;
}
