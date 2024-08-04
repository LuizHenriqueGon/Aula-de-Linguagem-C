#include <stdio.h>
//Escreva um programa que receba uma medida em metros e retorne essa quantidade em centímetros.
int main(void) {
  float Medida, Centimetros;

  printf("Digite a medida em Metros: ");
  scanf("%f", &Medida);
  Centimetros= Medida * 100;

  printf("A Medidas em Metros é: %.2f equivalem a %.2f centímetros", Medida, Centimetros);
    
  return 0;
}