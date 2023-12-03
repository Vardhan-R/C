#include <stdio.h>
#include <stdlib.h>

#define N 10

void linearSort(int[], int *);

int main() {
	// initialise an array (whose elements are unique positive integers)
	int arr[N];
	arr[0] = 5; arr[1] = 8; arr[2] = 3; arr[3] = 1; arr[4] = 7; arr[5] = 17; arr[6] = 12; arr[7] = 2; arr[8] = 6; arr[9] = 10;

	// find the greatest element
	int max = 0;
	for (int i = 0; i < N; i++) {
		int x = arr[i];
		if (x > max) {
			max = x;
		}
	}

	// initialise a new "array" with all 0's
	int *sorted_arr = (int*) calloc(max, sizeof(int));

	// perform the actual sorting step
	linearSort(arr, sorted_arr);

	// move all the 0's to the right of the sorted array
	int b = 0, c = 0;
	for (int i = 0; i < max; i++) {
		if (*(sorted_arr + b) == 0) {
			if (*(sorted_arr + c) > 0)  {
				*(sorted_arr + b) = *(sorted_arr + c);
				*(sorted_arr + c) = 0;
				b++;
			}
		} else {
			b++;
		}
		c++;
	}

	// print the sorted array
	printf("%s", "Sorted array: ");
	for (int i = 0; i < N; i++) {
		printf("%d ", *(sorted_arr + i));
	}
	printf("\n");

	// free the memory
	free(sorted_arr);

	return 0;
}

void linearSort(int input_arr[], int *sorted_arr) {
	printf("Linear sorting...\n");

	for (int i = 0; i < N; i++) {
		int x = input_arr[i];
		*(sorted_arr + x - 1) = x; // index = value - 1
	}
}