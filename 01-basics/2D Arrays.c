#include <stdio.h>

int main(){

    int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("%d ", numbers[1][2]);
    printf("%d ", numbers[2][2]);

    return 0;
}