#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>

#ifndef sort_h
#define sort_h

int fill_array(int *arr, int size);
int bubble_sort(int *arr, int size);
int bogo_sort(int *arr, int size);
int selection_sort(int *arr, int size);

#endif
