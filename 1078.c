#include <stdio.h>

void multiplicacao(int, int);

int main() {
  
  int n;
  int m = 1; 
  int l;

//armazena o valor a ser multiplicado 
  scanf("%d", &n);

  multiplicacao(n, m);

  return 0;
}

void multiplicacao(int n, int m){

//repete a ação até chegar em 10
  if( m <= 10){
    int l;

//executa a ação da multiplicação
    l= n * m;
    
//apresenta ao usuário seu resultado
    printf("%d x %d = %d\n", m,n,l);
//soma mais um ao número da multiplicação 
    multiplicacao(n, m+1);
  }
}
