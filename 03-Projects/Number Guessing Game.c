#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    //Number Guessing Name.
    srand(time(NULL));

    int guess=0;
    int tries=0;
    int min=1;
    int max=100;
   int answer = (rand() % (max - min + 1)) + min;

    printf("******Number Guessing Game******\n");
    do{
        printf("Guess the number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;
        
        if(guess < answer){
            printf("TOO LOW!\n");
        }
        else if(guess > answer){
            printf("TOO HIGH!\n");
        }
        else{
            printf("CORRCET!\n");
        }

    }while(guess != answer);

    printf("the answer is %d\n", answer);
    printf("it took %d tries\n", tries);

    return 0;
}