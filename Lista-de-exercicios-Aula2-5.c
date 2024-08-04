#include <stdio.h>/*Escreva um programa que receba um número e diga se ele é par ou ímpar.
Dica: use o operador mod (%)
x = a % b;
A variável x recebe o resto da divisão de a por b (a / b). Se o resto é 0, a é divisível por
b, caso contrário, a não é divisível por b.*/

int main(void) {
  int Numero;
  printf("Digite um numero: ");
  scanf("%d", &Numero);
  if(Numero % 2 == 0){
    printf("O numero %d par", Numero);
  }else{
    printf("O numero %d impar", Numero);
  }
  return 0;
}