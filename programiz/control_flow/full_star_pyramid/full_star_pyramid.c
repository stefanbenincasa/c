// Pyramid needs to be twice as wide, plus one, as it is tall
#include <stdio.h>

int main() {

	int rows, spaces;

	printf("\n%s", "Please enter the number of desired rows: ");
	scanf("%d", &rows);

	spaces = rows - 1; 
	for (int y = 1; y <= rows; y++) {
		// The printing of BOTH spaces & rows 
	}

	return 0;

}

// for (int x = 1; x <= rows * 2 + 1; x++) printf("* ");
