#include <stdio.h>
#include <string.h>

void HappyBirthday(char name[], int age){
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s\n", name);
    printf("Happy Birthday to you!\n");
    printf("Your now %d year old!\n", age);
    
}
int main(){

    char name[50]= "";
    int age= 0;

    printf("Enter your Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your Age: ");
    scanf("%d", &age);

    HappyBirthday(name, age);
    HappyBirthday(name, age);
    HappyBirthday(name, age);
 
    return 0;
}