/* Import */ 
#include <stdio.h> 
#define MAX 1000

/* Declare */
int getLine(char str[], int limit);
void appendOverEight(char otherStr[], char list[]);
void copy(char to[], char from[]);

/* Main */
int main() {

	int length;
	char line[MAX]; 
	char linesOverEight[MAX]; 

	while((length = getLine(line, MAX)) > 0) {
		printf("%s %s%s %d\n", "Input Line:", line, "Length:", length);
		if(length > 8) {
			printf("%s%s\n", "Line is over eight characters!", line);
		}
		else {
			printf("%s\n", "Line is under eight characters!");
		}
	}

	return 0;

} 

/* Define */

// 'i' is not just used for FOR LOOP counter
int getLine(char str[], int limit) {
	int i, c; 
	// if (str[0] == '\n') return 0; -> redundant due to FOR condition
	for(i = 0; i < limit-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		str[i] = c;
	if(c == '\n')
		str[i] = c; 
		i++;
	str[i] = '\0'; 
	return i; 
} 

void appendOverEight(char otherStr[], char list[]) {
	int i = 0;
}

void copy(char to[], char from[]) {
	int i; i = 0;
	while ((to[i] = from[i]) != '\0') 
	++i;
}
