#include <stdio.h>
/*Um programa que recebe duas notas do aluno e retorna:
  - “Aprovado” se a média das notas for maior ou igual a 6,0;
  - “Reprovado”, se a média for menor que 4,0;
  - “Recuperação” se a média for menor que 6,0, porém, maior que 4,0.
  Restrição: Não use else*/
int main(void) {
  float Nota1, Nota2, Media;
  printf("Digite a primeira nota: ");
  scanf("%f", &Nota1);
  printf("Digite a seguta nota: ");
  scanf("%f", &Nota2);
  Media = (Nota1 + Nota2) / 2;
  if (Media >= 6.0){
    printf("Aprovado");
  }
  if (Media < 4.0){
    printf("Reprovado");
  }
  if (Media < 6.0 && Media > 4.0){
    printf("Recuperação");
  }
  return 0;
}