#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

int *linearSort(int[]);
void shuffleArray(int[]);

void merge(int[], int, int, int);
void mergeSort(int[], int, int);

int main() {
	int arr[N];

	// arr[0] = 4;
	// arr[1] = 6;
	// arr[2] = 2;
	// arr[3] = 1;
	// arr[4] = 8;
	// arr[5] = 10;
	// arr[6] = 7;
	// arr[7] = 3;
	// arr[8] = 5;
	// arr[9] = 9;

	printf("Initialising...\n");
	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	shuffleArray(arr);

	// for (int i = 0; i < N; i++) {
	// 	printf("%d ", arr[i]);
	// }
	// printf("\n");

	int *sorted_arr = linearSort(arr);
	// printf("Merge sorting...\n");
	// mergeSort(arr, 0, N - 1);

	// for (int i = 0; i < N; i++) {
	// 	printf("%d ", *(sorted_arr + i));
	// }
	// printf("\n");

	// for (int i = 0; i < N; i++) {
	// 	printf("%d ", arr[i]);
	// }
	// printf("\n");

	printf("Sorted.\n");

	return 0;
}

int *linearSort(int input_arr[]) {
	printf("Linear sorting...\n");
	static int sorted_arr[N];

	for (int i = 0; i < N; i++) {
		int x = input_arr[i];
		sorted_arr[x - 1] = x;
	}

	return sorted_arr;
}

void shuffleArray(int input_arr[]) {
	time_t t_0;
	srand((unsigned) time(&t_0));

	printf("Shuffling...\n");
	for (int i = 0; i < 10 * N; i++) {
		int i_1 = rand() % N, i_2 = rand() % N;
		int temp_1 = input_arr[i_1];
		input_arr[i_1] = input_arr[i_2];
		input_arr[i_2] = temp_1;
	}
}



void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    // Create temp arrays
    int L[n1], R[n2];
  
    // Copy data to temp arrays
    // L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  
    // Merge the temp arrays back
    // into arr[l..r]
    // Initial index of first subarray
    i = 0;
  
    // Initial index of second subarray
    j = 0;
  
    // Initial index of merged subarray
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  
    // Copy the remaining elements
    // of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
  
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
  
// l is for left index and r is
// right index of the sub-array
// of arr to be sorted
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids
        // overflow for large l and h
        int m = l + (r - l) / 2;
  
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
  
        merge(arr, l, m, r);
    }
}