#include "pilhaEstatica.h"

struct pilha
{
  int item[MAX];
  int quant;
};

PILHA * criar_pilha ()
{
  PILHA *pi= (PILHA *) malloc (sizeof (struct pilha));
  if (pi != NULL)
    {
      pi->quant = 0;
      return pi;
    }
}

int inserir_pilha (PILHA * pi, int valor)
{
  if (pi == NULL)
    {
      return 0;
    }
    
  if (pilha_cheia (pi))
    {
      return 0;
    }
  pi->item[pi->quant] = valor;
  pi->quant++;
  return 1;
}


void liberar_pilha(PILHA *pi){
    free(pi);
}

int tamanho_pilha (PILHA * pi)
{
  if (pi == NULL)
    {
      return -1;
    }
  else
    {
      return pi->quant;
    }
}

int pilha_cheia (PILHA * pi)
{
  if (pi == NULL)
    {
      return -1;
        
    }else{
      return (pi->quant == MAX);
    }
}


int pilha_vazia (PILHA * pi)
{
  if (pi == NULL)
    {
      return -1;
    }else{
      return (pi->quant == 0);
    }
}


int remove_pilha(PILHA *pi){
    if(pi==NULL || pi->quant==0){
        return 0;
    }else{
    pi->quant--;
    return 1;
    }
}





