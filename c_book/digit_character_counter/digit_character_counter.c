#include <stdio.h>

int main() {

  // Basic assignment of core variables
  int i, character, characters, whiteSpaces, otherCharacters;
  int digits[10]; 

  // Place zero in all indices of the array; sample input
  for (i = 0; i <=9; ++i)
    digits[i] = i; 

  // Discern action for input
  while ((character = getchar()) != 'a') {
    if ((character >= '0') && (character <= '9')) {
      printf("Line one :\t%d", ++digits[0]);
      printf("Line two : \t%d\n", digits[0]); 
      printf("Print char : \t%d\n", '0'); 
    }
  }
} 