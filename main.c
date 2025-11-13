#include <stdlib.h>
#include "sort.h"
#define N1 10
#define N2 1000
#define N3 10000
#define N4 100000



int main(){
	int *arr1 = (int*)malloc(N1 * sizeof(int));
	int *arr2 = (int*)malloc(N2 * sizeof(int));
	int *arr3 = (int*)malloc(N3 * sizeof(int));
	int *arr4 = (int*)malloc(N4 * sizeof(int));
    
    if(!arr1) return ENOMEM;
    if(!arr2) return ENOMEM;
    if(!arr3) return ENOMEM;
    if(!arr4) return ENOMEM;

	fill_array(arr1, N1);
	fill_array(arr2, N2);
	fill_array(arr3, N3);
	fill_array(arr4, N4);

    clock_t start;
    clock_t end;


//bubble sort
    //N1
    start = clock();
    bubble_sort(arr1, N1);
    end = clock();
    double bubble1 = (double)(end - start)/CLOCKS_PER_SEC;
    //N2
    start = clock();
    bubble_sort(arr2, N2);
    end = clock();
    double bubble2 = (double)(end - start)/CLOCKS_PER_SEC;
    //N3
    start = clock();
    bubble_sort(arr3, N3);
    end = clock();
    double bubble3 = (double)(end - start)/CLOCKS_PER_SEC;
    //N4
    start = clock();
    bubble_sort(arr4, N4);
    end = clock();
    double bubble4 = (double)(end - start)/CLOCKS_PER_SEC;

//refill array
	fill_array(arr1, N1);
	fill_array(arr2, N2);
	fill_array(arr3, N3);
	fill_array(arr4, N4);


//selection sort
    //N1
    start = clock();
    selection_sort(arr1, N1);
    end = clock();
    double selection1 = (double)(end - start)/CLOCKS_PER_SEC;
    //N2
    start = clock();
    selection_sort(arr2, N2);
    end = clock();
    double selection2 = (double)(end - start)/CLOCKS_PER_SEC;
    //N3
    start = clock();
    selection_sort(arr3, N3);
    end = clock();
    double selection3 = (double)(end - start)/CLOCKS_PER_SEC;
    //N4
    start = clock();
    selection_sort(arr4, N4);
    end = clock();
    double selection4 = (double)(end - start)/CLOCKS_PER_SEC;


//refill array again
    fill_array(arr1, N1);

//bogo sort
    //N1
    start = clock();
    bogo_sort(arr1, N1);
    end = clock();
    double bogo1 = (double)(end - start)/CLOCKS_PER_SEC;

    //дальнейшие нахождение время сортировки не имеет смысла
    //так как данный вид сортировки будет сортировать массив
    //из 100 элементов ОГРОМНОЕ количество времени



//print results

    printf("\t\t Sort Algorythms\n");
    printf("Name\t\t10el\t\t1000el\t\t10000el\t\t100000el\n");
    printf("Bubble\t\t%f\t%f\t%f\t%f\n", bubble1, bubble2, bubble3, bubble4);
    printf("Selection\t%f\t%f\t%f\t%f\n", selection1, selection2, selection3, selection4);
    printf("Bogo\t\t%f\tn/a\t\tn/a\t\tn/a\n", bogo1);




    free(arr1);
	free(arr2);
	free(arr3);
	free(arr4);
	return 0;
}
