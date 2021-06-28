#include <stdio.h>

void quadrado(int);

int main() {
  int n;

  scanf("%d", &n);

  quadrado(n);
  return 0;
}

void quadrado(int n){

  int l;

  if( 1 > n){
    return;
  }

    if (n % 2 == 0){
      l = n * n;
      quadrado(n - 2);
    }
  printf("%d^2 = %d\n", n, l);
  }
