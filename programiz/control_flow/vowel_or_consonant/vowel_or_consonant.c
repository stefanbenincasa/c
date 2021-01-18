// COULD NOT get this working
// Determine if charcter is consonant or vowel 

#include <stdio.h>

int isVowel(char character);

int main() {

	int vowelStatus;
	char character;
	
	while(character != '0') {
		printf("\n%s\n%s\n", "Is it a vowel or a consonant?", "Please enter a character...");
		scanf("%c", &character);
	}

	return 0;

}

int isVowel(char character) {
	if(character == 'p') {
		return 1;
	} else {
		return 0;
	}
}
