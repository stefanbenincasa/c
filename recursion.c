#include <stdio.h>

int get_factorial(int x, int factorial);

int main() {
  int x = 5;
  printf("The factorial of %d is: %d\n", x, get_factorial(x, 0));
}

int get_factorial(int x, int factorial) {
  if(x == 0) return 1;
  factorial = x * get_factorial(x-1, factorial);
  return factorial;
}

