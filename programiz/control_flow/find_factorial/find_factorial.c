#include <stdio.h>

int main() {

	signed int n, factorial;

	printf("\n%s", "Please input a number to get its factorial: ");
	scanf("%d", &n);

	factorial = 1;
	for(int index = 1; index <= n; index++) {
		factorial = factorial * index;
	}

	printf("\n%d\n", factorial);

	return 0;

}
