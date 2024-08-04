#include <stdio.h>

int main(void) {
  float Precos[8],Soma=0,Media,Maior,Menor,busca;
  int i,Count=0;

  for(i = 0; i < 8; i++){
    printf("Digite o preço do produto %d: ",i+1);
    scanf(" %f",&Precos[i]);
    Soma += Precos[i];
  }
  Maior = Precos[0];
  Menor = Precos[0];
  for(i = 1; i < 8; i++){
    if(Precos[i] > Maior){
      Maior = Precos[i];
    }
    if(Precos[i]< Menor){
      Menor = Precos[i];
    }
  }
  Media = Soma / 8;
  printf("\nA média dos preços é: %.2f\n",Media);
  printf("Preços nas altos: %.2f\n",Maior);  
  printf("Preços nas baixos: %.2f\n",Menor);  
  
  printf("Digite o preço que deseja buscar do vetor: ");
  scanf(" %f",&busca);
  for(i = 0; i < 8; i++){
    if(Precos[i] == busca){
      Count++;
    }
  }
  printf("O preço %.2f aparece %d vezes no vetor",busca,Count);
  return 0;
}