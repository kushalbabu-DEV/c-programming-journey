#include <stdio.h>

int main(){


    int numbers[6] = {0};
    
    for(int i = 0; i < 6; i++){
        printf("Enter a number :");
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < 6; i++){
        printf("%d ", numbers[i]);
    }
    return 0;
}