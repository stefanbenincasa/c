#include <stdio.h>

int getLength(int array[]);

int main() {

	int limit = 0, i;
	int numbers[limit];

	for(i = 0; i <= limit; i++) {
		if(i == limit) numbers[i] = 000; 
		else numbers[i] = i+1;
	}

	// printf("\n%d", numbers);
	for(i = 0; i < getLength(numbers); i++) {
		printf("\n%s\n", "<<Test>>");	
	}

	return 0;

}

int getLength(int array[]) {
	int length = 0;
	for(int i = 0; array[i] != 000; i++) length = i+1;
	return length;
}
