#include <stdio.h>
//Escreva um programa que receba 5 valores e retorne a média entre eles.
int main(void) {
  float Valor1, Valor2, Valor3, Valor4, Valor5, Media;
  printf("Digite os 5 Valores ");
  scanf("%f %f %f %f %f",&Valor1,&Valor2,&Valor3,&Valor4,&Valor5);

  Media= (Valor1 + Valor2 + Valor3 + Valor4 + Valor5) / 5;
  printf("A média dos cinco valores é: %.2f\n",Media);
  return 0;
}