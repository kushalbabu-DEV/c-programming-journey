#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int age;
    int studentInput;
    int employedInput;
    char name[50]="";

    bool isStudent;
    bool isEmployed;

    printf("Enter your name: ");
    fgets(name , sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Are you a student? (1 = Yes, 0 = No): ");
    scanf("%d", &studentInput);

    isStudent = (studentInput == 1);

    printf("Are you employed? (1 = Yes, 0 = No): ");
    scanf("%d", &employedInput);

    isEmployed = (employedInput == 1);

    printf("Enter your age: ");
    scanf("%d", &age);

    if(strlen(name) == 0){
        printf("\nYou did not enter your name\n");
    }
    else{
        printf("\nHello %s!!!\n", name);
    }

    if(isStudent){
        printf("\nYou are a student!\n");
    }
    else{
        printf("\nYou are NOT a student!\n");
    }

    if(isEmployed){
        printf("You are employed!\n");
    }
    else{
        printf("You are NOT employed!\n");
    }

    if(age < 0){
        printf("You haven't even been born yet!");
    }
    else if(age == 0){
        printf("You are a newborn.");
    }
    else if(age < 18){
        printf("You are a child.");
    }
    else if(age < 65){
        printf("You are an adult.");
    }
    else{
        printf("You are a senior.");
    }

    return 0;
}
