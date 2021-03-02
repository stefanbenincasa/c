#include <stdio.h>

int main() {
	// Declare //
	int rows = 10, points[rows], position[2] = {0, 0};

	// Get data points //
	for(int i = 0; i < rows; i++) {
		points[i] = i;
		// printf("\n%d", points[i]); 
	}
	
	// Output points matrix //
		// Reference position in relation to data point
	for(int y = 0; y < rows; y++) {
		for(int x = 0; x < rows; x++) {
			position[0] = x; position[1] = y;
			printf("%d %d\n", position[0], position[1]);

		}
	}
}

/* 

	Notes

	- As the program is incrementing along Y row, it should have an awareness of X Column
	- Should index x align with total needed for X column, print *

*/
