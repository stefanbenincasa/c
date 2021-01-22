#include <stdio.h>

int main() {

	signed int n, factorial;

	printf("\n%s", "Please input a number to get its factorial: ");
	scanf("%d", &n);

	for(int index = n; index != 1; index--) {
		factorial *= index * index-1;
		printf("\nYour factorial is %d.\n\n", factorial);
	}

	return 0;

}
