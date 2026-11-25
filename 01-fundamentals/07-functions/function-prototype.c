#include<stdio.h>
#include<stdbool.h>


void Hello(char name[], int age); // Function Prototype.
bool agecheck(int age);

int main(){

    Hello("Kushal", 18);
    
    if(agecheck(18)){
        printf("Your are eligbile to work in this company");
    }
    else{
        printf("You must be 16+ work in this company");
    }


    return 0;
}

void Hello(char name[], int age){
    printf("hello %s\n", name);
    printf("Your %d year old\n", age);
}
bool agecheck(int age){
    return age >= 16;
}