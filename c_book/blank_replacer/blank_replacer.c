#include <stdio.h>

int main() {

  int character;
  int blankCount;

  while ((character = getchar()) != EOF) {

    while ((character = ' ')) {
      ++blankCount
    }

    if (blankCount >= 1) {
      putchar(); 
    }
    character = ' '

    continue; 
  }
}