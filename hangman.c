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
char * omitt_letters(char * word);

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

  printf("%s", word);
  omitt_letters(word); 

  fclose(fptr); 
}

int gen_rand_num(int limit, int exclude_zero) {
  srand(time(NULL));
  int num = rand() % limit;

  if(exclude_zero) {
    num = num == 0 ? 1 : num; 
  }

  return num;
}

char * omitt_letters(char * word) {
  char rtrn_word[MAX_WORD_SIZE];
  int str_len, exclude_factor; 

  str_len = strlen(word);
  if(str_len <= 1)  {
    printf("Error omitting letters! Program ending...");
    exit(1);
  }

  // Exclude random indexes from initial string, for result string; find the factors of number
  
}

