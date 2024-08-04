#include <stdio.h>
//Escreva um programa que leia o preço de uma refeição e retorne o valor dos 10% da conta.
int main(void) {
  float PrecoRefeicao, ValorGorjeta;
  printf("Digite o preço da refeição: "); 
  scanf("%f", &PrecoRefeicao);  
  ValorGorjeta = PrecoRefeicao * 0.10;
  printf("O valor da gorjeta é: %.2f", ValorGorjeta);
  return 0;
}