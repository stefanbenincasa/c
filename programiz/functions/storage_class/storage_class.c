#include <stdio.h>

static int LIMIT = 10;

int main() {
	for(int i = 0; i < LIMIT; i++)  {
		printf("%s", "* ");
		if(i == LIMIT-1) printf("\n");
	}
}
