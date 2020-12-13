/* Import */ 
#include <stdio.h> 
#define MAX 1000

/* Declare */
int getLine(char string[], int limit);
void reverse(char string[], int limit, char reversed[]);
void copy(char to[], char from[]);

/* Main */
int main() {

	int length;
	char line[MAX]; 
	char reversed[MAX]; 

	while((length = getLine(line, MAX)) > 0) {
		printf("%s %s%s %d\n", "Input Line:", line, "Length:", length);
		reverse(line, length, reversed);
		printf("%s %s\n", "Reversed Input:", reversed);
	}

	return 0;

} 

/* Define */

void reverse(char string[], int limit, char reversed[]) {

	int i, j; char endOfLine;

	i = limit-1; j = 0;
	while(i >= 0 && j < limit) {
		if(string[i] == '\0') endOfLine = string[i];
		else reversed[j] = string[i];
		i--; j++;
	}

	reversed[limit] = endOfLine;

} 

// 'i' is not just used for FOR LOOP counter
int getLine(char string[], int limit) {
	int i, c; 
	for(i = 0; i < limit-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		string[i] = c;
	string[i] = '\0'; 
	return i; 
} 

void copy(char to[], char from[]) {
	int i; i = 0;
	while ((to[i] = from[i]) != '\0') 
	++i;
}
