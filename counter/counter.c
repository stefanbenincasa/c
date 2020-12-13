#include <stdio.h>

int main() {

  char character;
  int newLineCount = 0;
  int tabCount = 0;
  int blankCount = 0;

  while ((character = getchar()) != 'a') {
    switch (character) {
      case '\n' : ++newLineCount; break;
      case '\t' : ++tabCount; break;
      case ' '  : ++blankCount; break; 
    }
  }

  printf("%s\t%3d\t", "Newline count", newLineCount);
  printf("%s\t%3d\t", "Tab count", tabCount);
  printf("%s\t%3d\t\n", "Blank count", blankCount);
}