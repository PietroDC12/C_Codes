#include <stdio.h>

void num(int, int);

int main(){

  num(2, 100);
  return 0;
}

void num(int n, int m){
  if( n > m){
    return 0;
  }

  if (n % 2 == 0){
    printf("%d\n", n);
    num(n + 2, 100);
    }
  }
