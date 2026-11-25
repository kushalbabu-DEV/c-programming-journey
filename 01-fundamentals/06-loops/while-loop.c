#include<stdio.h>
#include<string.h>

int main(){

    //int number= 0;

    //while(number <= 0){
      // printf("Enter a number greater than 0: ");
      //  scanf("%d", &number);
    // }

    char name[50]= "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){

        printf("Name cannot be empty! please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';

    }

    printf("Hello %s", name);

    return 0;
}