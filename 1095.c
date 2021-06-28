#include <stdio.h>

void sequencia(int, int);

int main() {
  
  int n;
  int m;

  sequencia(1, 60);

  return 0;
}

void sequencia(int n, int m){

  if (m >= 0 && n != 100){
    printf("I=%d J=%d\n", n, m);
    sequencia(n + 3, m - 5);
  }
}
