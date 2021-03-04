#include <stdio.h>

int isPrime(int number); 
int isArmstrong(int number); 
int extractDigits(int number);

int main(void) {
	int number, validNumber = 0;

	while(!validNumber) {
		printf("\n%s", "Input a natural number >>> ");
		scanf("%d", &number);
		if(number > 0 && number < 10000)  
			validNumber = 1;	
		else 
			printf("\n%s", "Number must be between 0 and 10000");
	}

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
	int digits[10000]; 

	if(true) {
			
	}

	// digits[0] = 1; digits[1] = 1; digits[2] = 2; digits[3] = '\0';
	// for(int i = 0; digits[i] != '\0'; i++) { printf(" %d", digits[i]);	}

	return 0;
}
