#include <stdio.h>/*Faça um programa que receba um ano e diz se é um ano bissexto ou não. */

int main(void) {
  int Ano;
  printf("Digite um ano: ");
  scanf("%d", &Ano);
  if (Ano % 4 == 0 && Ano % 100 != 0 || (Ano % 400 == 0)) {
    printf("O ano %d é bissexto", Ano);
  }else{
    printf("O ano %d não é bissexto", Ano);
  }
  return 0;
}