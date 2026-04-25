#include <stdio.h>
#include <stdlib.h>

int main() {
	int rows = 8, cols = 32, batch = 3;
	int size_2d = rows * cols;
	int *arr_2d = malloc(size_2d  * sizeof(int));

	for (int i = 0; i < size_2d; i++) {
		arr_2d[i] = i + 1;
	}

	// We need to split the matrix into column-wise chunking as below:
	/* matrix -> [8, 32]
	 * mat1 -> [8, 8],
	 * mat2 -> [8, 8],
	 * mat3 -> [8, 8],
	 * mat4 -> [8, 8],
	 */
	
	// columns-wise chunking
	int chunks = cols / rows;
	int chunk_cols = cols / chunks;

	for (int c = 0; c < chunks; c++) {
		int *chunk_ptr = arr_2d + c * rows * chunk_cols;
		for (int r = 0; r < rows; r++) {
			for (int cc = 0; cc < chunk_cols; cc++) {
				printf("%d ", chunk_ptr[r * chunk_cols + cc]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("-------------------------\n");
	printf("\n");

	// rows-wise chunking
	int chunks_r = rows / 2;
	int chunk_rows = 2;

	for (int c = 0; c < chunks_r; c++) {
		int *chunk_row_ptr = arr_2d + c * chunk_rows * cols;
		for (int r = 0; r < chunk_rows; r++) {
			for (int cc = 0; cc < cols; cc++) {
				printf("%d ", chunk_row_ptr[r * cols + cc]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
