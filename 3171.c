#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define true 1
#define false 0

int PASSOS = 0;

typedef int TIPOCHAVE;
typedef int bool;

typedef struct {
  TIPOCHAVE chave;
}REGISTRO;

typedef struct aux {
  REGISTRO reg;
  struct aux* prox;
}ELEMENTO, *PONT;

typedef struct {
  PONT inicio;
  PONT fim;
} FILA;

typedef struct adjacencia {
  int vertice;
  struct adjacencia *prox;
} ADJACENCIA;

typedef struct vertice {
  ADJACENCIA *cab;
} VERTICE;

typedef struct grafo {
  int vertice;
  int arestas;
  VERTICE *adj;
} GRAFO;

void visitaL(GRAFO * g, int s, bool *expl);

void inicializarFila(FILA* f){
  f->inicio = NULL;
  f->fim = NULL;
}

int tamanho(FILA* f){
  PONT end = f->inicio;
  int tam = 0;

  while (end != NULL) {
    tam++;
    end = end->prox;
  }
  return tam;
}

void exibirFila(FILA* f) {
  PONT end = f->inicio;
  printf("Fila: \" ");
  while (end != NULL) {
    printf("%i ", end->reg.chave);
    end = end->prox;
  }
  printf("\"\n");
}

bool inserirNaFila(FILA* f, REGISTRO reg) {
  PONT novo = (PONT) malloc(sizeof(ELEMENTO));
  novo->reg = reg;
  novo->prox = NULL;
  if (f->inicio==NULL) f->inicio = novo;
  else f->fim->prox = novo;
  f->fim = novo;
  return true;
}

bool excluirDaFila(FILA* f, REGISTRO* reg) {
  if (f->inicio==NULL) return false;
  *reg = f->inicio->reg;
  PONT apagar = f->inicio;
  f->inicio = f->inicio->prox;
  free(apagar);
  if (f->inicio == NULL) f->fim = NULL;
  return true;
}

void reinicializarFila(FILA* f) {
  PONT end = f->inicio;

  while (end != NULL){
    PONT apagar = end;
    end = end->prox;
    free(apagar);
  }
  f->inicio = NULL;
  f->fim = NULL;
}

GRAFO *criaGrafo(int v){
  GRAFO *g = (GRAFO *) malloc(sizeof(GRAFO));
  g->vertice=v;
  g->arestas=0;
  g->adj = (VERTICE *) malloc(v*sizeof(VERTICE));
  int i;
  for(i=0;i<v;i++){
    g->adj[i].cab = NULL;
  }
  return g;
}

ADJACENCIA *criaAdj(int v) {
  ADJACENCIA *temp = (ADJACENCIA *)malloc(sizeof(ADJACENCIA));
  temp->vertice = v;
  temp->prox = NULL;
  return(temp);
}

bool criaAresta(GRAFO *gr, int vi, int vf){
  if (!gr) return false;
  if ((vf<0)||(vf >= gr->vertice))
    return(false);
  if((vi<0)||(vi >= gr->vertice))
    return(false);

  ADJACENCIA *novo = criaAdj(vf);
  novo->prox = gr->adj[vi].cab;
  gr->adj[vi].cab = novo;

  ADJACENCIA *novo2 = criaAdj(vi);
  novo2->prox = gr->adj[vf].cab;
  gr->adj[vf].cab = novo2;

  gr->arestas++;
  return(true);
}

void largura(GRAFO *g) {
  bool expl[g->vertice];

  int u;
  for (u = 0; u < g -> vertice; u++)
    expl[u] = false;

  for (u = 0; u < g -> vertice; u++)
    if (!expl[u]){
      visitaL(g, u, expl);
    }
      
}


void visitaL(GRAFO *g, int s, bool *expl) {
  FILA f;
  inicializarFila(&f);
  expl[s] = true;
  
  REGISTRO *u = (REGISTRO *)malloc(sizeof(REGISTRO));
  u->chave = s;
  inserirNaFila(&f, *u);

  while (f.inicio) {
    excluirDaFila(&f, u);
    ADJACENCIA *v = g->adj[u->chave].cab;
    while(v) {
      if (!expl[v->vertice]) {
        expl[v->vertice] = true;
        
        PASSOS+=1;
        u -> chave = v->vertice;
        inserirNaFila(&f, *u);
        
      }
      v = v->prox;
    }
  
  }
  
  free(u);
}


int main(void) {

  int n;
  int l;
  scanf("%d %d", &n, &l);
  GRAFO *gr = criaGrafo(n+1);
  int i=0;
  int x,y;
  while(i<l){
    scanf("%d %d",&x,&y);
    criaAresta(gr, x, y);
    i++;
  }
  largura(gr);
  if(PASSOS<(n-1)){
    printf("INCOMPLETO\n");
  }
  else{
    printf("COMPLETO\n");
  }
  return 0;
}