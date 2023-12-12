#include <studio.h>
#include <stdlib.h>
#include <pthread.h>

typedef struct{
	int row;
	into column;
}parameters;

int sudoku_nums(){
	sudoku_size[SIZE];
}

void sudoku_columns(int col, int nums){
	parameters *data = (parameters *) malloc(sizeof(parameters));
	data->row = 1;
	data->column = 1;
	int interations[SIZE + 1] = 0;
	
	for (row = 0; row < 9; row++) {
		if (sudoku[col] == num) {
			return 0;
		}
	}
	
	return 1;
	
}

void sudoku_rows(int row, int nums){
	parameters *data = (parameters *) malloc(sizeof(parameters));
	data->row = 1;
	data->column = 1;
	
	for (col = 0; col < 9; col++) {
		if (sudoku[row] == num) {
			return 0;
		}
	}
	
	return 1;
	
}

int subgridValid(int row, int col, int nums){
	for (int r_row = row ; r_row <, row + 3; r_row++){
		for (int col = c_col; c_col < col + 3; c_col++{
			if (sudoku[row][col] == num) {
				return 0;
			}
		}
	}
}

void check_sub(){
	parameters *data = (parameters *) malloc(sizeof(parameters));
	data->row = 1;
	data->column = 1;
	
	for (int num = 1, num <= SIZE; num++) {
		if (!subgridValid(row, col, nums){
			printf("Grid is not valid");
		}
	}
	
}

int main(){
	printf("Hello World\n");
	return 0;
}
