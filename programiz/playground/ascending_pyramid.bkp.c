#include <stdio.h>

int main() {
	// Declare //
	int rows = 10, points[rows], position[2] = {0, 0};

	// Get data points //
	for(int i = 0; i < rows; i++) points[i] = i;
	
	// Output points matrix //
	for(int y = 0; y < rows; y++) {
		for(int x = 0; x < rows; x++) {
			position[0] = x; position[1] = y;
			for(int i = 0; i < rows; i++) {
				if(
			}
		}
	}
}

/* 

	Notes

	- As the program is incrementing along Y row, it should have an awareness of X Column
	- Should index x align with total needed for X column, print *

*/
