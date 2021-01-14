#include <stdio.h>

#define MAX 5

int main() {

	long input, sum;

	scanf("%lu", &input);
	sum = input + input;
  printf("Size of input = %lu bytes\n", sizeof(input));
	printf("%s\t%lu,\n%s\t%lu\n", 
		"The user input is:", 
		input,
		"The input multiplied by two is:", 
		sum
	);

	return 0; 

}
