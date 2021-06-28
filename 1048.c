#include <stdio.h>

int main(void) {
  double salario;
  double reajuste;
  double salario_novo;

  scanf("%lf", &salario);

  if(salario <= 400.00){
    reajuste = salario * 0.15;
    salario_novo = salario + reajuste;

    printf("Novo salario: %.2f\n", salario_novo);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 15 %%\n");
  }
  if(salario > 400.00 && salario <= 800.00){
    reajuste = salario * 0.12;
    salario_novo = salario + reajuste;

    printf("Novo salario: %.2f\n", salario_novo);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 12 %%\n");
  }
  if(salario > 800.00 && salario <= 1200.00){
    reajuste = salario * 0.10;
    salario_novo = salario + reajuste;

    printf("Novo salario: %.2f\n", salario_novo);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 10 %%\n");
  }
  if(salario > 1200.00 && salario <= 2000.00){
    reajuste = salario * 0.07;
    salario_novo = salario + reajuste;

    printf("Novo salario: %.2f\n", salario_novo);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 7 %%\n");
  }
  if(salario > 2000.00){
    reajuste = salario * 0.04;
    salario_novo = salario + reajuste;

    printf("Novo salario: %.2f\n", salario_novo);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 4 %%\n");
  }
  return 0;
}