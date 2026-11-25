
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int UserChoice, int ComputerChoice);

int main() {

    // Rock Paper Scissors

    srand(time(NULL));

    printf("******Play ROCK PAPER SCISSORS******\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

   
   switch(userChoice){
      case 1:
        printf("You Chose Rock.\n");
      break;
      case 2:
        printf("You Chose Paper.\n");
      break;
      case 3:
        printf("You Chose Sciccors.\n");
      break;
    }

   switch(computerChoice){
      case 1:
        printf("Computer Chose Rock.\n");
      break;
      case 2:
        printf("Computer Chose Paper.\n");
      break;
      case 3:
        printf("Computer Chose Sciccors.\n");
      break;
    }
    
    checkWinner(userChoice, computerChoice);

    return 0;
}

int getComputerChoice() {
    return (rand() % 3) + 1;
}

int getUserChoice() {
  int choice=0;
  do{
    printf("Choose an option:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissorcs\n");
    printf("Enter Your Choice:\n");
    scanf("%d", &choice);
  }while(choice < 1 || choice > 3);
    return choice;
}

void checkWinner(int UserChoice, int ComputerChoice) {

  if(UserChoice == ComputerChoice){
    printf("Its a TIE!!\n");
  }
  else if((UserChoice == 1 && ComputerChoice == 3) ||
          (UserChoice == 2 && ComputerChoice == 1) ||
          (UserChoice == 3 && ComputerChoice == 2)){
    printf("You WON!!\n");
          }
  else{
    printf("You Lost!!");
  }
    
}
