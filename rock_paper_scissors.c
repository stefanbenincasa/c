#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char * get_weapon(char option);
char * judge_round_victory(char * user_weapon, char * comp_weapon);
char gen_rand_option();

int main() {
  int round = 1, playing = 1, user_score = 0, comp_score = 0, menu_options[10];
  char * user_weapon = NULL; char * comp_weapon = NULL; char * result = NULL;
  char user_option = '\0';

  printf("\n%s\n\n", "Welcome to Rock, Paper, Scissors!");
  printf("%s\n%s\n%s\n\n", "Rules:", "[1] Best out of three", "[2] Take no prisoners");
  
  while(playing) { 
    printf("%s\n", "Please input your numerical option between 1-3 inclusive.");
    printf("%s\n", "Options:\n[1] Rock\n[2] Paper\n[3] Scissors");

    printf("\n"); scanf(" %c", &user_option); printf("\n");
    user_weapon = get_weapon(user_option);

    if(user_weapon == "unknown") {
      printf("Please select a valid option!\nReprinting menu...\n");
      continue;
    }

    comp_weapon = get_weapon(gen_rand_option()); 
    result = judge_round_victory(user_weapon, comp_weapon); 

    if(result == "tie") {
      user_score++; 
      comp_score++;
      printf("Round Result: Tie!\n");
    }
    else if(result == "win") {
      user_score++;
      printf("Round Result: Win!\n");
    }
    else if(result == "loss") {
      comp_score++;
      printf("Round Result: Loss!\n");
    }

    round++;

    if(round > 3) {
      playing = 0;
      printf("%s\n%s\n", "Round Limit Reached!", "Calculating results...");
    }
    else {
      printf("Proceeding to next round...\n\n");
    }
  
    if(!playing) { 
      if(user_score == comp_score) printf("%s", "It's a tie!");
      else if(user_score > comp_score) printf("%s", "You win!");
      else if (user_score < comp_score) printf("%s", "You lose!");
      printf("\n%s%d\n%s%d\n", "User Score: ", user_score, "Computer Score: ", comp_score);
      printf("\n%s\n\n%s\n", "Great game!", "END");
    }
  }

  return 0;
}

char * get_weapon(char option) { 
  if(option == '1') return "rock";
  else if(option == '2') return "paper";
  else if(option == '3') return "scissors";
  else return "unknown";
}

char * judge_round_victory(char * user_weapon, char * comp_weapon) {
  if(user_weapon == comp_weapon) return "tie";
  else if(user_weapon == "rock") return comp_weapon == "scissors" ? "win" : "loss";
  else if(user_weapon == "paper") return comp_weapon == "rock" ? "win" : "loss"; 
  else if(user_weapon == "scissors") return comp_weapon == "paper" ? "win" : "loss"; 
}

char gen_rand_option() {
  srand(time(NULL));
  int selection = rand() % 4;
  selection = selection == 0 ? 1 : selection; 
  selection = selection + '0';
  return selection;
}

