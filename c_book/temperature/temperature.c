// This is a new implementation of the the intial task from 1.2 of text.
// This version amkes use of functions, the other does not.

#include <stdio.h>

/* 	
	Tasks :
	- Set limits
	- Increment through fahrenheit temperatures
	- Convert them
	- Print each conversion 
	- End program
*/

// Global declarations
int withinLimits(int fTemp);
int increment(int fTemp, int step);
int convertToCelsius(int fTemp);
int print(int fTemp, int cTemp);

// Main
int main() {
	
	// Declarations  
	int fTemp, cTemp, step;

	// Print menu
	printf("\n%s\n", "Fahrenheit to Celsius Coversions : [0..300]"); 
	printf("\n\t%s\t\t%s\n", "Fahrenheit", "Celsius"); 

	// Intitialise main variables	
	fTemp = 0;
	cTemp = 0;
	step = 20;

	// Proceed to : incrementation -> conversion -> print
	while(withinLimits(fTemp) == 1) {
		cTemp = convertToCelsius(fTemp);
		print(fTemp, cTemp);
		fTemp += step; 
	}

	return 0;
}

int withinLimits(int fTemp) {
	return fTemp >= 0 && fTemp <= 300 ? 1 : 0;	
}

int convertToCelsius(int fTemp) {
	return 5 * (fTemp-32) / 9; 
}

int print(int fTemp, int cTemp) {
	printf("\t%d\t\t\t%d\n", fTemp, cTemp);
	return 0;
}
