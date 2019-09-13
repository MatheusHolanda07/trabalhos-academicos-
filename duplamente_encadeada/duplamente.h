#include <stdint.h>
#include <stdio.h>

typedef struct lista TLISTA;
typedef struct no TNO;

TLISTA *criar_lista();

int lista_vazia(TLISTA *li);
int tamanho(TLISTA *li);
void imprimir(TLISTA *li);
int remover(TLISTA *li);

int inserir_inicio(TLISTA *li, int valor);
int inserir_final(TLISTA *li, int valor);
