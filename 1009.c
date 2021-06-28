#include <stdio.h>

int main(void) {
  char nome;
  double salario_fixo, venda, comissao;

  
scanf("%s %lf %lf", &nome, &salario_fixo, &venda);
  comissao = salario_fixo + venda * 0.15;

  printf("TOTAL = R$ %.2f\n", comissao);

  return 0;
}