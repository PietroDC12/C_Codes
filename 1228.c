#include <stdio.h>

int main(){
	int largada[24];
	int chegada[24];
	int comp[24];
	int ult = 0;
  int aux = 0;
  int pilotos, x, y;

	while(scanf("%d",&pilotos) != EOF){
    ult = 0; 
		for(aux=0; aux<pilotos; aux++){
			scanf("%d", &largada[aux]);
		}
		for(aux=0; aux < pilotos; aux++){
			scanf("%d", &chegada[aux]);
		} 
		for(x = 0; x < pilotos; x++){
			for(y = 0; y < pilotos; y++){
				if(largada[x] == chegada[y]){
					comp[y] = x + 25;
				}
			}
		}
		for(x = 0; x < pilotos; x++){
			for(y = x+1; y < pilotos; y++){
				if(comp[x] > comp[y]){
					aux = comp[y];
					comp[y] = comp[x];
					comp[x] = aux;
					ult++;
				}
			}
		}
		printf("%d\n", ult);
  }
	return 0;
}