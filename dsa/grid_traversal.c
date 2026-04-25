#include <stdio.h>
#include <stdlib.h>

int main() {
	int rows = 3, cols = 3, batch = 3;
	int size_2d = rows * cols;
	int size_3d = rows * cols * batch;
	int *arr_2d = malloc(size_2d  * sizeof(int));
	int *arr_3d = malloc(size_3d * sizeof(int));

	for (int i = 0; i < size_2d; i++) {
		arr_2d[i] = i + 1;
	}


	//for (int r = 0; r < rows; r++) {
	//	int *row_ptr = arr_2d + r * cols;
	//	for (int c = 0; c < cols; c++) {
	//		printf("%d ", row_ptr[c]);
	//	}
	//	printf("\n");
	//}

	for (int i = 0; i < size_3d; i++) {
		arr_3d[i] = i + 1;
	}

	// From linear Transformation to Cubic
	for (int b = 0; b < batch; b++) {
		int *batch_ptr = arr_3d + b * rows * cols;
		for (int r = 0; r < rows; r++) {
			for (int c = 0; c < cols; c++) {
				printf("%d ", batch_ptr[r * cols + c]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
