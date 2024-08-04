#include <stdio.h>

int main(void) {
  int Idade, Nasci;
  printf("Digite a sua idade e o ano de nascimento: ");
  scanf("%d %d", &Idade,&Nasci);

  printf("A sua idade é %d \n",Idade);
  printf("O seu ano de nascimento é %d",Nasci);
  return 0;
}