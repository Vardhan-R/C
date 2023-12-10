#include <stdio.h>
#include <stdlib.h>

#define N 10

void arrange(int *, int, int *);
void count(int[], int *);

int main() {
	// initialise an array
	int arr[N];
	arr[0] = 6; arr[1] = 9; arr[2] = 12; arr[3] = 1; arr[4] = 1; arr[5] = 2; arr[6] = 1; arr[7] = 3; arr[8] = 7; arr[9] = 7;

	printf("Linear sorting...\n");

	// find the greatest element
	int g = 0;
	for (int i = 0; i < N; i++) {
		int x = arr[i];
		if (x > g) {
			g = x;
		}
	}

	// initialise a new "array" with all 0's
	int *cntr_arr = (int*) calloc(g, sizeof(int));

	// count
	count(arr, cntr_arr);

	// initialise another new array
	int *sorted_arr = (int*) malloc(N * sizeof(int));

	// arrange
	arrange(cntr_arr, g, sorted_arr);

	// print the sorted array
	printf("%s", "Sorted array: ");
	for (int i = 0; i < N; i++) {
		printf("%d ", *(sorted_arr + i));
	}
	printf("\n");

	// free the memory
	free(cntr_arr);
	free(sorted_arr);

	return 0;
}

void arrange(int *cntr_arr, int max_val, int *sorted_arr) {
	int c = 0;
	for (int i = 0; i < max_val; i++) {
		for (int j = 0; j < *(cntr_arr + i); j++) {
			*(sorted_arr + c) = i + 1; // value = index + 1
			c++;
		}
	}
}

void count(int input_arr[], int *cntr_arr) {
	for (int i = 0; i < N; i++) {
		(*(cntr_arr + input_arr[i] - 1))++; // index = value - 1
	}
}