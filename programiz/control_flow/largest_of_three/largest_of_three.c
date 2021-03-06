#include <stdio.h>

int getLength(int array[]);

int main() {

	// Declare 
	int largest, i;
	int numbers[4];

  // Initalise
	/// Insert numbers, then append '000' for end flag
  largest = 0;
	numbers[0] = 2;
	numbers[1] = 10;
	numbers[2] = 5;
	numbers[3] = 000;

	// Find the largest of the three numbers in the array
	for(i = 0; i < getLength(numbers); i++) {
		if(numbers[i] > largest) largest = numbers[i]; 
	}

	// Print largest number in array
	printf("\n%s%d\n\n", "Largest Number: ", largest);

	return 0;

}

int getLength(int array[]) {
	int length = 0;
	for(int i = 0; array[i] != 000; i++) length = i+1;
	return length;
}
