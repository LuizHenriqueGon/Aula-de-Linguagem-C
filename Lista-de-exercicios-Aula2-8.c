#include <stdio.h>

int main() {
  int idade;
  float peso;

  
  printf("Digite a idade do concorrente: ");
  scanf("%d", &idade);
  printf("Digite o peso do concorrente (em kg): ");
  scanf("%f", &peso);

  
  if (idade >= 13 && idade <= 14) {
    
    if (peso <= 45) {
      printf("Categoria: Infantil, Peso Leve\n");
    } else {
      printf("Categoria: Infantil, Peso Pesado\n");
    }
  } else if (idade >= 15 && idade <= 17) {
    
    if (peso <= 60) {
      printf("Categoria: Juvenil, Peso Leve\n");
    } else {
      printf("Categoria: Juvenil, Peso Pesado\n");
    }
  } else if (idade >= 18) {
    
    if (peso <= 85) {
      printf("Categoria: Adulto, Peso Leve\n");
    } else {
      printf("Categoria: Adulto, Peso Pesado\n");
    }
  } else {
    printf("Idade fora das faixas etárias permitidas.\n");
  }

  return 0;
}
