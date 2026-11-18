#include <stdio.h>

int main(){

  // Arrays and Strings
  
  char Fruits[][100]={"Apple", "Watermelon", "Banana"};
  int size=sizeof(Fruits) / sizeof(Fruits[0]);

    Fruits[0][3]='e';
    Fruits[2][3]='Q';

  for(int i=0; i < size; i++){
    printf("%s\n", Fruits[i]);
  }

    return 0;
}