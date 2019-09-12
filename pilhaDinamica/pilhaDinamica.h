#include <stdio.h>
#include <stdlib.h>

typedef struct pilha PILHA;
PILHA *criar_pilha();
void liberar_pilha(PILHA *pi);
int tamanho_pilha(PILHA *pi);

int pilha_cheia(PILHA *pi);
int pilha_vazia(PILHA *pi);
int inserir_pilha(PILHA *pi, int valor);
int remover_topo(PILHA *pi);
int consultar_pilha(PILHA *pi, int valor);
void imprimir_pilha(PILHA *pi);