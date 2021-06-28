#include <stdio.h>

int main(void) {
  double A, B, C, m;

  scanf("%lf %lf %lf", &A, &B, &C);

  m = (A * 2 + B * 3 + C * 5) /10;


  printf("MEDIA = %.1f\n", m);
  return 0;
}