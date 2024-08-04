#include <stdio.h>
//Um trabalhador recebe R$ 100,00 por dia trabalhado. Ao receber, são descontados 8% de impostos. Escreva um programa que receba o número de dias trabalhados e informe o quanto deve ser pago ao trabalhador.
int main(void) {
  float dias, pagamento, imposto;
  printf("Informe o número de dias trabalhados: ");
  scanf("%f" ,&dias);
  pagamento = dias * 100;
  imposto = pagamento * (1 - 0.08);
  printf("O pagamento com desconto de impostos é: %.2f\n" ,imposto);
  printf("O pagamento sem desconto de impostos é: %.2f\n" ,pagamento); 
  return 0;
}