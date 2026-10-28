#include <stdio.h>

int main(){

    //variables
    int age= 18;
    int year= 2008;
    int month= 11;
    int day= 06;

    printf("I am %d year old\n", age);
    printf("i was born in %d year\n", year);
    printf("i was born in %d month of the year\n",month);
    printf("i was born %d day of the %d month\n",day, month);

    return 0;
}