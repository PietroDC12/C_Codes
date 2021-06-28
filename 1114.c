void tentativa(int);

int main() {
  int n;

  tentativa(n); 
  
  return 0;
}

void tentativa(int n){

  scanf("%d", &n);

    if(n == 2002){
      printf("Acesso Permitido\n");
      return;
      }

    if(n != 2002){
      printf("Senha Invalida\n");
      tentativa(n = 0);
      }
}