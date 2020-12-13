#include <stdio.h>

int main() {
	
	#define IN 1
	#define OUT 0
	int c, i, j, k, y;
	int wordLengths[10];

	// Initialise array with zero values
	for (i = 0; i < 10; i++) 
		wordLengths[i] = 0;
	

	// Continually process input until a blank, tab, or newline character
	// is encountered. At which point, store word length of recent word.
	j = 0;
	while ((c = getchar()) != 'q') {
		
		if (c == ' ' || c == '\t' || c == '\n') {
			j++;
		}	
		// Begin character counting here as we know we're in-word
		else {
			wordLengths[j]++;
		}
	}

	// Print results
	printf("Word lengths : \n");
	for (k = 0; k < 10; k++) {
		if (wordLengths[k] != 0) {
			for(y = 0; y < wordLengths[k]; y++) { 
				printf("#");
			}
			printf("\n");
		}
	}

}
