#include <stdio.h>

int main(void) {
  float Peso, Altura;
  printf("Digite a sua Altura e o seu Peso ");
  scanf("%f %f", &Altura, &Peso);

  printf("A sua Altura é: %.2f\n O seu Peso é: %.2f", Altura, Peso);
  return 0;
}