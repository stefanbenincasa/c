#include <stdio.h>

int main() {
  int input, number, isTakingInput, isPositive;

  isTakingInput = 1;
  isPositive = 1;
  while(isTakingInput) {
    printf("\n%s", "Please enter a integer within 3 digits: ");
    scanf("%d", &number);

    if(number > 1000) {
      printf("\n%s\n%s", "Number is too large!!!.", "Try again.");
    } else {
      printf("Number %d is within range.", number); 
      isPositive = (10 + number) > 10 ? 1 : 0; 
      printf("\n%s%s\n\n", "Its polarity is: ", isPositive ? "positive" : "negative");
      isTakingInput = 0;
    }
  }

	return 0;

}
