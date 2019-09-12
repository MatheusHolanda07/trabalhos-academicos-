#include "pilhaDinamica.h"

struct pilha{
    int valor;
    struct pilha *prox;
    struct pilha *topo;
};

PILHA *criar_pilha(){
    PILHA *pi = (PILHA*)malloc(sizeof(PILHA));
    if(pi !=NULL)
        pi->topo=NULL;
        return pi;
    
}

void liberar_pilha(PILHA *pi){
    if(pi !=NULL){
        PILHA *novoNO;
        while(pi->topo!=NULL){
            novoNO =pi->topo ;
            pi->topo = pi->topo->prox;
            free(novoNO);
        }
        free(pi);
    }
}

int tamanho_pilha(PILHA *pi){
    if(pi ==NULL){
        return 0;
    }
    int cont = 0;
    PILHA *novoNO = pi->topo;
    while(novoNO != NULL){
        cont++;
        novoNO=novoNO->prox;
        
    }
    
    return cont;
}

int pilha_cheia(PILHA *pi){
    return 0;
}

int pilha_vazia(PILHA *pi){
    if(pi ==NULL){
        return 1;
    }
    if(pi->topo==NULL){
        return 1;
    }
    return 0;
}

int inserir_pilha(PILHA *pi, int valor){
    if(pi==NULL){
        return 0;
    }
    PILHA *novoNO = (PILHA*)malloc(sizeof(PILHA));
    if(novoNO ==NULL){
        return 0;
    }
    novoNO->valor=valor;
    novoNO->prox = pi->topo;
    pi->topo=novoNO;
    return 1;
}

int remover_topo(PILHA *pi){
    if(pi==NULL){
       return 0; 
    }
    if(pi->topo ==NULL){
        return 0;
    }
    PILHA *novoNO =pi->topo;
    pi->topo = novoNO->prox;
    free(novoNO);
    return 1; 
}

int consulta_topo(PILHA* pi)
{
    if(pi == NULL)
    {
        return 0;
    }
    if(pi->topo == NULL)
    {
        return 0;
    }
    printf("\nValor no Topo: %d\n", pi->topo->valor);
    return 1;
}

void imprimir_pilha(PILHA *pi)
{
    PILHA *aux;
    aux = pi->topo->prox;
    while (aux != NULL)
    {
        printf ("%d\n", aux->valor);
        aux = aux->prox;
    }
}

