/* Import */ 
#include <stdio.h> 
#define MAX 1000

/* Declare */
int getLine(char line[], int limit, int isOneNormal);
void resetLine(char string[], int limit);
void copy(char to[], char from[]);

/* Main */
int main() {

	int length, max, isOneNormal;
	char line[MAX]; 
	
	while( ((length = getLine(line, MAX, isOneNormal)) > 0) && (isOneNormal == 1) ) {
		printf("%s\n", line);
	}

	if(isOneNormal == 0) {
		printf("%s", line);
	}
	
	// Remove trailing blanks
	return 0;

} 

/* Define */

// 'i' is not just used for FOR LOOP counter
int getLine(char line[], int limit, int isOneNormal) {

	int i, c;

	isOneNormal = 0;
	for(i = 0; i < limit && (c=getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
		if(c != ' ') isOneNormal = 1;
	}

	line[i] = '\0'; 
	return i; 

} 

void resetLine(char string[], int limit) {

	int i;

	for(i = 0; i < limit; ++i) {
		// string[i] = '';
	}

}

void copy(char to[], char from[]) {
	int i; i = 0;
	while ((to[i] = from[i]) != '\0') 
	++i;
}
