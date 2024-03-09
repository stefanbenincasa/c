#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// DONE 
// Read in random word from file & and store in array of characters
// Omitt characters from randomly generated word
// BUG: Game logic 
// Set chances

// TO_DO
// BUG: Strange output
// Define Hangman portions to be printed it screen

#define MAX_WORD_SIZE 30 
#define MAX_LINE_NUMBER 1000

int gen_rand_num(int limit, int exclude_zero) {
  srand(time(NULL));
  int num = rand() % limit;

  if(exclude_zero) {
    num = num == 0 ? limit : num; 
  }

  return num;
}

int compare_guess_word(char guess, char * word, char * omitted_word) {
  int index = 0, matched_index = -1;

  while(word[index] != '\0') {
    if(word[index] == guess && omitted_word[index] != guess) {
      matched_index = index; 
      break;
    }

    index++;
  }

  return matched_index;
}

void omitt_letters(char * word, char * omitted_word) {
  char result[MAX_WORD_SIZE];

  int index = 0;
  while(word[index] != '\0') {
    result[index] = (index + 1) % 2 == 0 ? '_' : word[index];
    index++;
  }

  strcpy(omitted_word, result);
}

void substitute_with_guess(char guess, char * omitted_word, int matched_index) {
  int index = 0;
  while(omitted_word[index] != '\0') {
    if(index == matched_index) {
      omitted_word[index] = guess;
      break;
    }

    index++;
  }
}

void trim_newline(char * word) {
  char trimmed_word[strlen(word)];
  int index = 0;

  while(word[index] != '\0') {
    if(word[index] != '\n') {
      trimmed_word[index] = word[index];
    }
    index++;
  }
  
  strcpy(word, trimmed_word);
}

void print_menu_portion(int lives) {

}

int main() {
  FILE *fptr;
  int rand_line_number;
  char word[MAX_WORD_SIZE];

  fptr = fopen("/home/stefan/documents/c/assets/words.txt", "r");

  if(fptr == NULL) {
    printf("Error opening file!\nEND");
    exit(1);
  }
  
  rand_line_number = gen_rand_num(MAX_LINE_NUMBER, 1); 
  for(int count = 1; count <= rand_line_number; count++) fgets(word, MAX_WORD_SIZE, fptr);

  if(strlen(word) < 1) {
    printf("Error selecting word from file!\nEND");
    exit(1);
  }

  trim_newline(word);
  
  char guess;
  char omitted_word[strlen(word)];
  int lives = 3, matched_index = -1;

  omitt_letters(word, omitted_word);
  printf("\nWelcome to Hangman!\n\n", word);
  printf("The Word is: %s\n", word);
  printf("The Substituted Omitted Word is: %s\n\n", omitted_word);

  while(lives > 0) {
    printf("Guess Missing Letter in Word: ");
    scanf(" %c", &guess);

    matched_index = compare_guess_word(guess, word, omitted_word);
    
    if(matched_index > -1) {
      substitute_with_guess(guess, omitted_word, matched_index); // Possible error here, same error with bizarre output and string length
      printf("The Substituted Omitted Word is: %s\n\n", omitted_word);
      if(strcmp(word, omitted_word) == 0) {
        printf("Correct! Congratulations! Game Over!\nEND\n\n");
        break;
      }
      else {
        printf("Correct!\nMoving to next round...\n\n");
      }
    }
    else {
      lives--;
      if(lives == 0) { 
        printf("Incorrect! Sorry! Game Over!\nEND\n\n");
      }
      else { 
        printf("Incorrect!\nYou have %d lives remaining!\nMoving to next round...\n\n", lives);
      }
    }
  }

  fclose(fptr); 
}

