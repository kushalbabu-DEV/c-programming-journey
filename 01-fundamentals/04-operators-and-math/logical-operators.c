#include <stdio.h>

int main(){

    int temp=24;

    // && = AND
    // || = OR
    // ! = NOT

    if(temp > 0 && temp < 30){
        printf("the temp is good");
    }
    else{
        printf("The temp is bad!");
    }


    return 0;
}