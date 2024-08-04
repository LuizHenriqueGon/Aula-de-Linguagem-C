#include <stdio.h>

int main(void) {
  int Pontuacao, TotalPontuacao=0, SomaPontuacao=0, MenoresPontuacao=0, MaiorPontuacao=0,PrimeiraLeitura=1;

  printf("Digite a pontuação do jogador (ou -1 para encerrar): ");
  scanf("%d", &Pontuacao);
  while (Pontuacao != -1){
    if(PrimeiraLeitura){
      MenoresPontuacao = Pontuacao;
      MaiorPontuacao = Pontuacao;
      PrimeiraLeitura= 0;
    }
    TotalPontuacao++;
    SomaPontuacao += Pontuacao;
    if(Pontuacao < MenoresPontuacao){
      MenoresPontuacao = Pontuacao;
    }
    if(Pontuacao > MaiorPontuacao){
      MaiorPontuacao = Pontuacao;
    }
    printf("Digite a pontuação do jogador (ou -1 para encerrar): ");
    scanf("%d",&Pontuacao);
  }
  if(TotalPontuacao > 0){
    float MediaPontuacao = (float)SomaPontuacao / TotalPontuacao;
    printf("\nForam lidas pontuações dos %d jogadores.\n", TotalPontuacao);
    printf("A média da pontuação foi %.2f.\n", MediaPontuacao);
    printf("A maior pontuação foi %d.\n", MaiorPontuacao);
    printf("A menor pontuação foi %d.\n", MenoresPontuacao);
  }else{
    printf("Nenhuma pontuação foi lida.\n");
  }
  
  return 0;
}