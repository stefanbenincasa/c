#include <stdio.h>

int main() {

	int a, b, c;

	printf("\n%s", "Input for Value A: "); scanf("%d", &a);
	printf("\n%s", "Input for Value B: "); scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("\n%s", "Swapped Values:"); 
	printf("\nA: %d, B: %d\n\n", a, b); 
	return 0;

}
