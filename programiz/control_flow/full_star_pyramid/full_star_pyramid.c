// Pyramid needs to be twice as wide, plus one, as it is tall
#include <stdio.h>

int main() {

	int rows, columns;

	printf("\n%s", "Please enter the number of desired rows: "); scanf("%d", &rows);
	columns = rows % 2 == 0 ? rows + 1 : rows;

	int row, character, stars, spaces;
	for (row = 1; row <= rows; row++) {
		spaces = rows - row; 
		stars = rows - spaces; 
		for (character = 1; character <= spaces; character++) printf(" ");
		for (character = 1; character <= stars; character++) printf("* ");
		printf("\n");
	}

	return 0;

}
