#include <stdio.h>/*Escreva um programa que receba 4 notas de um aluno: P1, T1, P2 e T2. Após isso, o
programa deve calcular a sua Média Final usando a seguinte fórmula:
Média1 = P1 * 0,6 + T1 * 0,4
Média2 = P2 * 0,7 + T2 * 0,3
Média Final = (Média1 + Média2) / 2
Finalmente, o programa deve apresentar a Média Final do aluno e apresentar na tela se o
aluno foi aprovado, reprovado ou está de recuperação, usando as seguintes regras:
Média Final > = 6,0 🡪 aluno aprovado
Média Final < 4,0 🡪 aluno reprovado
4,0 >= Média Final < 6,0 🡪 aluno de recuperação*/ 
int main(void) {
  float Prova1, Trabalho1, Prova2, Trabalho2;
  float Media1, Media2, MediaFinal;
  printf("Digite a nota da Prova 1: ");
  scanf("%f", &Prova1);
  printf("Digite a nota do Trabalho 1: ");
  scanf("%f", &Trabalho1);
  printf("Digite a nota da Prova 2: ");
  scanf("%f", &Prova2);
  printf("Digite a nota do Trabalho 2: ");
  scanf("%f", &Trabalho2);
  Media1 = (Prova1 * 0.6) + (Trabalho1 * 0.4);
  Media2 = (Prova2 * 0.7) + (Trabalho2 * 0.3);
  MediaFinal = (Media1 + Media2) / 2;
  printf("A média final é: %.2f\n", MediaFinal);
  if (MediaFinal >= 6.0){
    printf("Aluno aprovado\n");
  }else if (MediaFinal < 4.0){
    printf("Aluno reprovado\n");
  }else{
    printf("Aluno de recuperação\n");
  }
  return 0;
}
