#include <stdio.h>
// Escreva um programa que receba uma medida em centímetros e retorne essa quantidade em metros
int main(void) {
  float Medida, Centimetros;

  printf("Digite a medida em Metros: ");
  scanf("%f", &Centimetros);
  Medida = Centimetros / 100;

  printf("A Medidas em Centimetros é: %.2f equivalem a %.2f Medida",
         Centimetros, Medida);

  return 0;
}