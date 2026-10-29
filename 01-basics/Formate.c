#include <stdio.h>

int main(){

    // Formate Specifier= Special token that begin with a % symbol.
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flages)
    //                    they control how data is displayed or interpreted.

    int age= 18;
    int price= 200;
    int income= 500;
    // width
    // we can use -any number for the number to appeare on the left and 0 to add 0's in the empty space (eg, 018)
    printf("%3d\n", age);
    printf("%3d\n", price);
    printf("%3d\n", income);

    // precision (mainly used to show precise number)
    // we can use .(any number) to show the exact amount of numbers after decimals instead of showing unnesseary no we can also 
    // set width just by putting any number before the dot ".".

    float price1= 19.99;
    float price2= 1.50;
    float price3= -100.00;
    
    printf("%4.2f\n",price1);
    printf("%4.2f\n",price2);
    printf("%4.2f\n",price3);

    return 0;

}