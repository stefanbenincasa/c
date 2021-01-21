#include <stdio.h>

int main() {
  int number;
  const int limit = 1000;

  printf("\n%s", "Please input number : ");
  scanf("%d", &number); 

  if(number > limit) printf("\n%s\n", "That number is too large."); 

  (number % 2 == 0) ?
  printf("\n%s\n", "Number is even.") :
  printf("\n%s\n", "Number is odd.");

  return 0;
}
