#include <stdio.h>

int main() {
  int Codigo;
  int Quantidade;
  float Total = 0;

  printf("Código - Produto - Preço\n");
  printf("1 - Arroz - R$ 20,00\n");
  printf("2 - Feijão - R$ 8,50\n");
  printf("3 - Macarrão - R$ 5,50\n");
  printf("4 - Óleo de cozinha - R$ 7,30\n");
  printf("5 - Açúcar - R$ 4,20\n");

  printf("\nDigite o código do produto: ");
  scanf("%d", &Codigo);
  printf("Digite a quantidade dos produtos: ");
  scanf("%d", &Quantidade);

  switch (Codigo) {
  case 1:
    Total = 20.00 * Quantidade;
    break;
  case 2:
    Total = 8.50 * Quantidade;
    break;
  case 3:
    Total = 5.50 * Quantidade;
    break;
  case 4:
    Total = 7.30 * Quantidade;
    break;
  case 5:
    Total = 4.20 * Quantidade;
    break;
  default:
    printf("Código de produto inválido.\n");
  }
  printf("Total de produto escolhido: %d\n", Quantidade);
  printf("Total a pagar é de R$%.2f\n", Total);

  return 0;
}
