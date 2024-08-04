#include <stdio.h>
/*Escreva um programa que receba três números inteiros e apresente-os na ordem
crescente.
Exemplo:
Entre com o primeiro número: 5
Entre com o segundo número: 15
Entre com o terceiro número: 2
15, 5, 2 */
int main(void) {
  int Numero1, Numero2, Numero3, Tempo;
  printf("Digite o primeiro número: ");
  scanf("%d", &Numero1);
  printf("Digite o segundo número: ");
  scanf("%d", &Numero2);
  printf("Digite o terceiro número: ");
  scanf("%d", &Numero3);
  if (Numero1 > Numero2){
    Tempo = Numero1;
    Numero1 = Numero2;
    Numero2 = Tempo;
  }
  if (Numero1 > Numero3){
    Tempo = Numero1;
    Numero1 = Numero3;
    Numero3 = Tempo;
  }
  if(Numero2 > Numero3){
    Tempo = Numero2;
    Numero2 = Numero3;
    Numero3 = Tempo;
  }  
  printf("A ordem crescente é: %d, %d, %d", Numero1, Numero2, Numero3);
  return 0;
}