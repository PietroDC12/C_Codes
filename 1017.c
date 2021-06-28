#include <stdio.h>

int main(void) {
  int combustivel = 12;
  int horas, km;
  float consumo;

  scanf("%d %d", &horas, &km);

  consumo = (km / 12.0) * horas;

  printf("%.3f\n", consumo);
  return 0;
}