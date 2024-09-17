/*
  Descreva i = 10;
  Faça
    Escrever i;
    i = i - 1;
  Enquanto (i > 0);
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("Numeros inteiros de dez até um\n\n");
  
  int i = 10;
  
  do{
    printf("%d\n", i);
    i--;
    }
  while( i > 0 );

    return 0;
}