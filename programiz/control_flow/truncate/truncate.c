#include <stdio.h>

int main() {
  int a;
  double b;

  // Runtime numbers are truncated or appended to, based on the
  // data type of the declared reference to store it
  a = 0;
  printf("\n%d\n", a);
  b = a;
  printf("\n%lf\n", b);

	return 0;

}
