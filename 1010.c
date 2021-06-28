#include <stdio.h>

int main(void) {
  int peca_1, peca_2, qtd_peca_1, qtd_peca_2;
  float valor_peca_1, valor_peca_2, valor_final;

  scanf("%d %d %f", &peca_1, &qtd_peca_1, &valor_peca_1);

  scanf("%d %d %f", &peca_2, &qtd_peca_2, &valor_peca_2);

  valor_final = qtd_peca_1 * valor_peca_1 + qtd_peca_2 * valor_peca_2;


  printf("VALOR A PAGAR: R$ %.2f\n", valor_final);
  return 0;
}