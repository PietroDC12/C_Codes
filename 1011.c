#include <stdio.h>

int main(void) {
  double vol;
  float r;

  scanf("%f", &r);

  vol = (4/3.0) * 3.14159 * (r * r * r);
  printf("VOLUME = %.3f\n", vol);
  return 0;
}