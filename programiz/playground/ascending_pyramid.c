#include <stdio.h>

void display(int n); 

static int LIMIT = 10;

int main() {
	int rows[LIMIT], n;

	printf("\n%s", "Please input total number of desired rows >>> ");
	scanf("%d", &n);
	
	display(n); 
}

void display(int n) {
	int spaces = n-1; 

	for(int y = 0; y < n; ++y) {
		for(int x = 0; x <= n; ++x) {
			if(x == n) printf("\n");
			else if(x < spaces) 
				printf(" ");
			else 
				printf("*");
		}
		spaces--;
	}

}
