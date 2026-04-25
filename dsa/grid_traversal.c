#include <stdio.h>
#include <stdlib.h>

// Traversing a grid
int main() {
	int rows = 3, cols = 3;
	int size = rows * cols;

	int *arr = malloc(rows * cols * sizeof(int));
	for (int i = 0; i < rows * cols; i++) {
		arr[i] = i + 1;
	}

	// grab the row pointers
	for (int r = 0; r < rows; r++) {
		int *row = arr + r * cols;
		for (int c = 0; c < cols; c++) {
			printf("%d ", row[c]);
		}
		printf("\n");
	}
	return 0;
}

