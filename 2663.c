#include <stdio.h>
void bubble_sort (int vetor[], int n) {
    int i, j, aux;

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {

            if (vetor[i] < vetor[j]) {

                aux          = vetor[i];
                vetor[i]     = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int main(){
  int n, k, i, clas = 0;  

  scanf("%d %d", &n, &k);

  int comp[n];

  for(i = 0; i < n; i++){
    scanf("%d", &comp[i]);
  }

  bubble_sort(comp, n);

  clas += k;
  i = k;

  while(comp[k-1] == comp[i]){
    clas++;
    i++;
  }
    
  printf("%d\n", clas);

  return 0;
}