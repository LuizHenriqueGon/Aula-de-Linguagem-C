#include <stdio.h>
/*Escreva um programa que apresente na tela uma conta simples matemática entre
dois valores e receba o resultado da conta do usuário. O programa deve informar se a
resposta foi correta ou não.
Exemplo:
10 + 5 = 7
Resposta errada...
10 + 5 = 15
Resposta certa!  */
int main(void) {
  int Numero1, Numero2,Resultado_Usuario, Resultado_Correto;
  printf("Digite o primeiro numero: ");
  scanf(" %d", &Numero1);
  printf("Digite o segundo numero: ");
  scanf("%d", &Numero2);
  Resultado_Correto = Numero1 + Numero2;
  printf("Digite o resultado da conta: ");
  scanf("%d", &Resultado_Usuario);
  if(Resultado_Correto == Resultado_Usuario){
    printf("Resposta correta!");
  }else if (Resultado_Correto != Resultado_Usuario){
    printf("Resposta errada...");
  }
  return 0;
}