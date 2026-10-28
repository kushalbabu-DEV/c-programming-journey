#include <stdio.h>

int main() {
    
    float gpa= 9.4;
    float updatedgpa= 8.1;
    float price= 1.2;
    char grade= 'A';
    printf("he had scored %.1f gpa in his first year\n", gpa);
    printf("but in the second year his gpa dropped to %.1f\n", updatedgpa);
    printf("he paid around $%.1f for his four years of college\n", price);
    printf("he ususally scored %c grade in all his exams thats why his gpa is %.1f",grade , gpa);
    return 0;
}