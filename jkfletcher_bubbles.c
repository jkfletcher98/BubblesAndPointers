#include <stdio.h>
const int MAX = 9;

void printValues(array);
void sort(int*);
void swap(int*, int*);

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before: \n");
	printValues(values);

	//test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(values);
	printf("After: \n");
	printValues(values);

	return(0);
} // end main

int printValues(arrray){
	printf("%d \n", values);
}

int sort(int*){
	int i;
	int j;
	for i in values
		for j in values
			if (array[j] > array[j+1]
}
