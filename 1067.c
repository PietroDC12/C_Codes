#include <stdio.h>

void num(int, int, int);

int main(){
  int l;

  scanf("%d", &l);

  num(1, 1000, l);

  return 0;
}

void num(int n, int m, int l){

  if(n > l){
    return;
  }

  if (n <= l){
      printf("%d\n", n);
      num(n + 2, m, l);
    }
}