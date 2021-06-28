#include <stdio.h>

int main(void) {
  double n1, n2, n3, n4, n5, nf, nf2;


  scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

  nf = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/ 10;

  printf("Media: %.1f\n", nf);
  if(nf >= 7.0){
    printf("Aluno aprovado.\n");
  }
  if(nf < 5.0){
    printf("Aluno reprovado.\n");
  }
  if(nf >= 5.0 && nf <= 6.9){
  printf("Aluno em exame.\n");
  scanf("%lf", &n5);
  
  printf("Nota do exame: %.1f\n", n5);

  nf2 = (n5 + nf) / 2;
    if(nf2 >= 5.0){
      printf("Aluno aprovado.\n");
      printf("Media final: %.1f\n", nf2);
    }
    if(nf2 < 5.0){
      printf("Aluno reprovado.\n");
    } 
  }  
  return 0;
}