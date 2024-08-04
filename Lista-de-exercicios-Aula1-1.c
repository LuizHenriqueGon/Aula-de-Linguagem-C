#include <stdio.h>
//Faça um programa que recebe dois valores e apresente na tela a soma, a subtração e multiplicação e a divisão desses dois valores.
int main(void) {
  float Num1, Num2;
  printf("Digite Dois Valores: ");
  scanf("%f %f", &Num1,&Num2);

  printf("A Soma: %.2f\n", Num1 + Num2);
  printf("A Subtração: %.2f\n", Num1 - Num2);
  printf("A Multiplicação: %.2f\n", Num1 * Num2);
  printf("A Divisão: %.2f\n", Num1 / Num2);
  return 0;
}