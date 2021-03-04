#include <stdio.h>

int isPrime(int i) {
	if(i % 2 == 0) {
		return 0;
	} else {
		return 1; 
	}
}

int main(void) {
	int interval; 

	printf("\n%s\n", "Input interval...");
	scanf("%d", &interval); printf("\n");

	printf("\n%s\n", "[Prime Numbers]"); 
	for(int i = 1; i <= interval; i++) {
		if(isPrime(i)) {
			printf("%d ", i); 	
		}
	}
			
	printf("\n\n"); 	

	return 0;
}
