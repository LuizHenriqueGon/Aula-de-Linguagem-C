#include <stdio.h>
//Sabe-se que o preço de um piso é de R$ 7,00 o m2 e que cada peça possui 0,25 m2. Escreva um programa que receba uma área (em metros quadrados) e retorne quantas peças serão necessárias e o valor total.
int main(void) {
  float area, PrecoPorM2= 7.0, TamanhoPeca= 0.25, PrecoPorPeca;
  int NumPecas;
  float ValorTotal;
  printf("Digite a área a ser coberta (em metros quadrados): ");
  scanf("%f", &area);
  NumPecas = (area + TamanhoPeca - 0.001) / TamanhoPeca;
  PrecoPorPeca = PrecoPorM2 * TamanhoPeca;
  ValorTotal= NumPecas * PrecoPorPeca;
  printf("Número de peças necessárias: %d\n", NumPecas);
  printf("Valor total: R$ %.2f\n", ValorTotal);
    
  return 0;
}