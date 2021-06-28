#include <stdio.h>

int main(void) {
  int km;
  float combustivel;
  float total;

  scanf("%d", &km);
  scanf("%f", &combustivel);

  total = km/combustivel;


  printf("%.3lf km/l\n", total);
  return 0;
}