#include <stdio.h>

int main() {
	
	// Inital variables
	#define IN 1
	#define OUT 0
	int c, state; 
	int characters[10];

	// Intialise state
	state = OUT;

	// Intialise array with EOL character
	characters[0] = 'E';

	// Process input for command line arguments & handle character input
	// if it does not already exist in the array
	printf("%s\n%s\n", "Enter words to count the character frequency", 
	"Press 'q' to quit");

	while ((c = getchar()) != 'q') {
		if (c == ' ' || c == '\t' || c == '\n') 
			state = OUT;
		else if (state == OUT) { 
			if (characterExists(c, characters))
				printf("Character exists.");
				continue;
			else {
				// Add character to the array
				printf("New character added to array.");
			}
		}
	}

}

setNewCharacter(char c, int characters) {

}

characterExists(char c, int characters) {
	int exists;
	for (int i = 0; i != 'E'; i++) {
		exists = characters[i] != 'E' && characters[i] != c ?
		0 : 1;
	}
	return exists;
}
