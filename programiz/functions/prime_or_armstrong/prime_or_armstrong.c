#include <stdio.h>

int isPrime(int number); 
int isArmstrong(int number); 

int main(void) {
	int number;

	printf("\n%s", "Input number >>> ");
	scanf("%d", &number);

	if(isPrime(number)) printf("\n%s", "Number is a Prime Number.");
	if(isArmstrong(number)) printf("\n%s", "Number is an Armstrong Number.");
	if(!isPrime(number) && !isArmstrong(number)) printf("\n%s", "Number is neither Armstrong or Prime.");

	printf("\n");

	return 0; 
}

int isPrime(int number) {
	if(number % 2 == 0) {
		return 0;
	} else {
		return 1; 
	}
}

int isArmstrong(int number) {
	// Code needed here	
	return 0;
}
