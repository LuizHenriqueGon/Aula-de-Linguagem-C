#include <stdio.h>
int main(void) {
  int Quantidade, codigo, total = 0;
  float soma = 0;
  do {
    printf("Tabela de Produtos:\n Código - Produto - Preço\n 1 - Arroz - R$ "
           "20,00\n 2 - Feijão - R$ 8,50\n 3 - Macarrão - R$ 5,50\n 4 - Óleo "
           "de cozinha - R$ 7,30\n 5 - Açúcar - R$ 4,20\n 6 - Finalizar os "
           "seus Pedidos\nDigite o código do produto: ");
    scanf("%d", &codigo);
    switch (codigo) {
    case 1:
      printf("Digite a quantidade desejada do produto: ");
      scanf("%d", &Quantidade);
      soma += (Quantidade * 20.00);
      total += Quantidade;
      break;
    case 2:
      printf("Digite a quantidade desejada do produto: ");
      scanf("%d", &Quantidade);
      soma += (Quantidade * 8.50);
      total += Quantidade;
      break;
    case 3:
      printf("Digite a quantidade desejada do produto: ");
      scanf(" %d", &Quantidade);
      soma += (Quantidade * 5.50);
      total += Quantidade;
      break;
    case 4:
      printf("Digite a quantidade desejada do produto: ");
      scanf("%d", &Quantidade);
      soma += (Quantidade * 7.30);
      total += Quantidade;
      break;
    case 5:
      printf("Digite a quantidade desejada do produto: ");
      scanf("%d", &Quantidade);
      soma += (Quantidade * 4.20);
      total += Quantidade;
      break;
    case 6:
      printf("Calculando...\n");
      break;
    default:
      printf("Código inválido\n");
    }
  } while (codigo != 6);
  printf("Total valor a pagar é de R$%.2f\n", soma);
  printf("A quantidade total de produtos na compra %d\n", total);

  return 0;
}