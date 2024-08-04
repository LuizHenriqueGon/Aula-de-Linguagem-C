#include <stdio.h>
//Escreva um programa que solicite ao usuário a altura e o raio de um cilindro circular e imprima seu volume. Use a fórmula:
//Volume de um cilindro = 3,141592 * raio * raio * altura
int main(void) {
  float Altura, Raio, Volume;
  float PI = 3.141592;

  printf("Digite a Altura do cilindro: ");
  scanf("%f",&Altura);
  printf("Digite o Raio do cilindro: ");
  scanf("%f",&Raio );

  Volume = PI * Raio * Raio * Altura;

    printf("O volume do cilindro é: %.2f\n", Volume);
  
  return 0;
}