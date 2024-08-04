#include <stdio.h>/* Escreva um programa que receba 4 valores: num1, num2, num3 e num4. Os valores
devem seguir as seguintes regras:
num1 > num2
num3 > num4
(num3 + num4) < (num1 + num2)
O seu programa deve testar e informar se os critérios foram atendidos ou não.*/
int main(void) {
  int Numero1, Numero2, Numero3, Numero4;
  printf("Digite o primeiro numero: ");
  scanf("%d", &Numero1);
  printf("Digite o segundo numero: ");
  scanf("%d", &Numero2);
  printf("Digite o terceiro numero: ");
  scanf("%d", &Numero3);
  printf("Digite o quarto numero: ");
  scanf("%d", &Numero4);
  if(Numero1 > Numero2 && Numero3 > Numero4 && (Numero3 + Numero4) < (Numero1 + Numero2)){
    printf("Os critérios foram atendidos.\n");
  }else{
    printf("Os critérios não foram atendidos.\n");
  }
  return 0;
}