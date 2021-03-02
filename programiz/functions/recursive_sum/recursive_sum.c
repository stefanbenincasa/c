#include <stdio.h>

int getSum(int n);

int main() {

	int sum, input;

	printf("\n%s", "Please input a number to get the sum of all numbers prior >>> ");
	scanf ("%d", &input);

	sum = getSum(input);
	printf("\n%s%d\n\n", "Sum: ", sum);

	return 0;
}

int getSum(int n) {
	if(n == 0) {
		return n; 
	} else {
		return n + getSum(n-1);
	}
}
