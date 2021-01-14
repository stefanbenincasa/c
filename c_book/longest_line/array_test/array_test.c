// Import  

#include <stdio.h> 
#define MAX 1000

// Declare

int getLine(char string[], int limit);
void appendLines(char string[], char strings[], int limit);

// Run

int main() {

	char line[MAX], lines[11];
	int length;

	while((length = getLine(line, MAX)) > 0) {
		// Take current charArray/line, 
	}

	return 0; 

}

// Define

void appendLines(char string[], char strings[], int limit) {
}

int getLine(char charArray[], int limit) {
	int i, c; 
	if (charArray[0] == '\n') return 0;
	for(i = 0; i < limit-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		charArray[i] = c;
	if(c == '\n')
		charArray[i] = c; 
		i++;
	charArray[i] = '\0'; 
	return i; 
} 
