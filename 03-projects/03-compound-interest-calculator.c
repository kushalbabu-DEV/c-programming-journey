#include <stdio.h>
#include <math.h>

int main(){

    //Compound Interest Calculator

    double principle= 0.0;
    double rate= 0.0;
    int years=0;
    int timescompounded=0;
    double Total=0.0;

    printf("\n-----Compound Interest Calculator------\n");

    printf("Enter the Principle: ");
    scanf("%lf", &principle);

    printf("Enter the Interest Rate % : ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("How many Years: ");
    scanf("%d", &years);

    printf("Enter the # of times compunded per year: ");
    scanf("%d", &timescompounded);

    Total = principle * pow(1 + rate / timescompounded, timescompounded * years);

    printf("After %d years, the total will be $%.2lf", years , Total);
    printf("\n------------------------------\n");
    

    return 0;
}