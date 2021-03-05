#include <stdio.h>

int isPrime(int number); 
int isArmstrong(int number); 
int extractDigits(int number);
int push(int TOP, int digits[], int digit);

int main(void) {
	int number, validNumber = 0;

	while(!validNumber) {
		printf("\n%s", "Input a natural number >>> ");
		scanf("%d", &number);
		if(number > 0 && number <= 10000)  
			validNumber = 1;	
		else 
			printf("\n%s", "Number must be from 1 to 10000 inclusive.");
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
	int digits[10000], TOP, quotient; 

  TOP = -1;
	if((quotient = number / 10000) >= 1) {
    push(TOP, digits, quotient); TOP++; 
    printf("\n%d", quotient); 
	}

	return 0;
}

// Helpers //
int push(int TOP, int digits[], int digit) {
  for(int i = 0; digits[i] <= TOP; i++) {
    // Push to array...
  }
  return 0;
}
