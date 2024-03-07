#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Read in random word from file & and store in array of characters DONE
// Omitt characters from randomly generated word

// Set chances
// Define Hangman portions to be printed it screen
// Play game; on third chance failure, output fully hanged man, end game

#define MAX_WORD_SIZE 30 
#define MAX_LINE_NUMBER 1000

int gen_rand_num(int limit, int exclude_zero);
char * omitt_letters(char * word, char * rtrn_word);

int main() {
  FILE *fptr;
  char word[MAX_WORD_SIZE];
  int rand_line_number;

  fptr = fopen("/home/stefan/documents/c/assets/words.txt", "r");

  if(fptr == NULL) {
    printf("Error opening file!");
    exit(1);
  }
  
  rand_line_number = gen_rand_num(MAX_LINE_NUMBER, 0); 
  for(int count = 1; count <= rand_line_number; count++) fgets(word, MAX_WORD_SIZE, fptr);

  char rtrn_word[MAX_WORD_SIZE];
  char * omitted_word = omitt_letters(word, rtrn_word); 

  fclose(fptr); 
}

int gen_rand_num(int limit, int exclude_zero) {
  srand(time(NULL));
  int num = rand() % limit;

  if(exclude_zero) {
    num = num == 0 ? limit : num; 
  }

  return num;
}

char * omitt_letters(char * word, char * rtrn_word) {
  if(strlen(word) < 1)  {
    printf("Error omitting letters! Program ending...");
    exit(1);
  }

  int index = 0;
  while(word[index] != '\n') {
    rtrn_word[index] = (index + 1) % 2 == 0 ? '_' : word[index];
    index++;
  }

  return rtrn_word;
}

