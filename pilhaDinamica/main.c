#include "pilhaDinamica.h"
int main(){
    PILHA *pi;
    int x;
    int valor;
    
    
    pi=criar_pilha();
    printf("digite um valor");
    scanf("%d", &valor);
    x=inserir_pilha(pi,valor);
    printf("digite um valor");
    scanf("%d", &valor);
    x=inserir_pilha(pi,valor);
    printf("digite um valor");
    scanf("%d", &valor);
    x=inserir_pilha(pi,valor);
    if(x==1){
        printf("\ninserido");
    }else{
        printf("\n nao inserido");
    }
    
    //liberar_pilha(pi);
    x=tamanho_pilha(pi);
    printf("\ntamanho e: %d", x);
    
    x=pilha_cheia;
    
    x=pilha_vazia;
    if(x==1){
        printf("\nvazia");
    }else{
        printf("\n nao vazia");
    }
    
    x = consulta_topo(pi);
    
    imprimir_pilha(pi);
    
    x=remover_topo(pi);
    if(x==1){
        printf("\nremovido");
    }else{
        printf("\n nao removido");
    }
    
    
    
    
    return 0;
}