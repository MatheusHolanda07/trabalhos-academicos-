#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct pilha PILHA;

PILHA *criar_pilha ();
int tamanho_pilha (PILHA * pi);
int pilha_cheia (PILHA * pi);
int pilha_vazia (PILHA * pi);
int inserir_pilha (PILHA * pi, int valor);
void liberar_pilha(PILHA *pi);
int remove_pilha(PILHA *pi);