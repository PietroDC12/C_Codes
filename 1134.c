#include <stdio.h>

int main(void) {
  int valor;
  int gasolina = 0;
  int alcool = 0;
  int diesel = 0;

while(scanf("%d", &valor)){
  if(valor == 1){
    alcool++;
  }
  if(valor == 2){
    gasolina++;
  }
  if(valor == 3){
    diesel++;
  }
  if(valor == 4){
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    break;
  }
}
  return 0;
}