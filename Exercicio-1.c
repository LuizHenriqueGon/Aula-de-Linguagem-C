#include <stdio.h>
/*Faça um programa que mostre os números pares entre 2 e 444, inclusive e em
seguida apresente os números ímpares entre 2 e 444, inclusive. Exemplo de saída
(exemplo com saída abreviada): 2, 4, 6, 8, 10, … 442, 444 3, 5, 7, 9, 11, … 441,
443*/
int main(void) {
  int i;
  printf("Digite numeros pares entre 2 e 444:\n");
  for (i = 2; i <= 444; i+=2) {
    if (i == 444) {
      printf("%d", i);
    } else {
      printf("%d ", i);
    }
  }
  printf("\nDigite numeros impares entre 2 e 444: \n");
  for(i = 3; i <= 443; i+= 2){
    if(i == 443){
      printf("%d", i);
    }else{
      printf("%d ", i);
    }
  }
  return 0;
}