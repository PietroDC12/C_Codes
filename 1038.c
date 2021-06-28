#include <stdio.h>

int main(void) {
  int qtd;
  int produto;
  float v_p;

  scanf("%d %d", &produto, &qtd);

  if (produto == 1){
    v_p = qtd * 4.0; 
    printf("Total: R$ %.2f\n", v_p);
  }
  if (produto == 2){
    v_p = qtd * 4.50; 
    printf("Total: R$ %.2f\n", v_p);
  }
  if (produto == 3){
    v_p = qtd * 5.0; 
    printf("Total: R$ %.2f\n", v_p);
  }
  if (produto == 4){
    v_p = qtd * 2.0; 
    printf("Total: R$ %.2f\n", v_p);
  }
  if (produto == 5){
    v_p = qtd * 1.50; 
    printf("Total: R$ %.2f\n", v_p);
  }
  return 0;
}