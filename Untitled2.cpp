// selection sort in C

#include <stdio.h>

// function to swap the the poition of two elements
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int array[], int size) {
	int step,i;
  for(step=0;step<size-1;step++) {
  	int min_idx = step;
  	for(i=step+1;i<size;i++) {
  		
  		if (array[i] < array[min_idx])
  		  min_idx = i;
	  }
	  // put min at the correct poition
	  swap(&array[min_idx], &array[step]);
  }
}

 //function to print am array
void printArray(int array[], int size) {
	int i;
	for(i=0;i<size;i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

// driver code
int main() {
	int data[] = {20, 12, 10, 15, 2};
	int size = sizeof(data) / sizeof(data[0]);
	selectionSort(data, size);
	printf("Sorted array in Acsending Order:\n");
	printArray(data, size);
}

