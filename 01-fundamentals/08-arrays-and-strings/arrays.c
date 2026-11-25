#include <stdio.h>

int main(){

    //Arrays

    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80};
    char Grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf("%d", numbers[i]);
    }

    return 0;
}