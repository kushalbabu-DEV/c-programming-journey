#include <stdio.h>

int main(){

    //break    = Break put out of the loop(stop).
    //continue = Skip current cycle of a loop (skip).

    for(int i = 1; i <= 10; i++){
        if(i == 4){
            break;
            // continue;=continues the loop.
        }
        
        printf("%d\n", i);
    }

    return 0;
}