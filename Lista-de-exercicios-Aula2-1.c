#include <stdio.h>
/*Escreva um programa que receba dois números e diz qual o maior dos dois.
Exemplo:
Entre com o primeiro valor: 5
Entre com o segundo valor: 2
5 é maior que 2 */
int main(void) {
  int Numero1, Numero2;
  printf("Digite o primeiro número: ");
  scanf("%d",&Numero1);
  printf("Digite o segundo número: ");
  scanf("%d",&Numero2);
  if(Numero1>Numero2){
    printf("%d é maior que %d",Numero1,Numero2);
  }
  if(Numero2>Numero1){
    printf("%d é maior que %d",Numero2,Numero1);
  }
  if(Numero1==Numero2){
    printf("Os números são iguais");
  }
  return 0;
}