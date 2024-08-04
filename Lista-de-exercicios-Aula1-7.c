#include <stdio.h>
//Sabe-se que o latão é obtido por uma mistura de 7 partes de cobre e 3 partes de zinco, ou seja, 70% do peso de latão é formado por cobre e 30% de zinco. Escreva um programa que receba o valor em kgs de quanto de latão deve ser produzido, e o programa deve indicar quantos kgs de cobre e zinco serão necessários.
int main(void) {
  float QuantCober, QuantZinco, QuantLatao;
  printf("Digite a quantidade de latão em kg: ");
  scanf("%f", &QuantLatao);
  QuantCober = (QuantLatao * 0.7);
  QuantZinco = (QuantLatao * 0.3);
  printf("A quantidade de cobre é: %.2f kg\n", QuantCober);
  printf("A quantidade de zinco é: %.2f kg\n", QuantZinco);
  printf("A quantideade de latão é: %.2f kg\n", QuantLatao);
  return 0;
}