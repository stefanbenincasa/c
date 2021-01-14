/* Import */ 
#include <stdio.h> 
#define MAX 1000

/* Declare */
int getLine(char charArray[], int limit);
void copy(char to[], char from[]);

/* Main */
int main() {

	int length, max;
	char charArray[MAX]; 
	char longest[MAX]; 

	while((length = getLine(charArray, MAX)) > 0) {
		printf("%s %s%s %d\n", "Input Line:", charArray, "Length:", length);
		if (length > max) {
			max = length;
			copy(longest, charArray);
		}
	}

	if (max > 0) {
		printf("%s %s", "Longest Line:", longest);
	}

	return 0;

} 

/* Define */

// 'i' is not just used for FOR LOOP counter
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

void copy(char to[], char from[]) {
	int i; i = 0;
	while ((to[i] = from[i]) != '\0') 
	++i;
}
