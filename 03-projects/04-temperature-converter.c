#include <stdio.h>

int main(){

    // Temparature converstion Programe
    // switch can also be choosen to be written if" elseif" function is repeating again and again

    char choice='\0';
    float Fahernheit= 0.0f;
    float Celcius= 0.0f;

    printf("\nTemperature Coverstion Programe\n");
    printf("C. Celcius to Fahernheit\n");
    printf("F. Fahernheit to Celcius\n");
    printf("Is the temp in (C)Celcius or (F)Fahernheit?: ");
    scanf("%c", &choice);

    if(choice == 'C' ){
        printf("Enter the Temperature in Celcius : ");
        scanf("%f", &Celcius);
        Fahernheit = (Celcius * 9 / 5) + 32;
        printf("%.1f Celcius is equal to %.1f Fahernheit. ", Celcius , Fahernheit);

    }
    else if(choice == 'F'){
        printf("Enter the Temperature in Fahernheit : ");
        scanf("%f", &Fahernheit);
        Celcius = ( Fahernheit - 32 ) * 5 / 9;
        printf("%.1f Fahernheit is equal to %.1f Celcius. ", Fahernheit , Celcius);

    }
    else{
        printf("Entered Invalide Choice!");
    }

    return 0;
}