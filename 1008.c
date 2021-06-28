#include <stdio.h>

int main(void) {
  int n, hora;
  float valor_hora, v;

  scanf("%d", &n);
  scanf("%d", &hora);
  scanf("%f", &valor_hora);

  v = hora * valor_hora;


  printf("NUMBER = %d\n", n);
  printf("SALARY = U$ %.2f\n", v);
  return 0;
}