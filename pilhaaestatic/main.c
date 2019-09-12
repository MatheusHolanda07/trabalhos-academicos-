#include "pilhaEstatica.h"
int main ()
{
  PILHA *pi;
  int x;
  int valor;


  pi = criar_pilha ();
//   liberar_pilha(pi);
  printf("insira um valor");
  scanf("%d", &valor);
  x = inserir_pilha (pi,valor );
  printf("insira um valor");
  scanf("%d", &valor);
  x = inserir_pilha (pi,valor );
  printf("insira um valor");
  scanf("%d", &valor);
  x = inserir_pilha (pi,valor );
  
  if(x==1){
      printf("\ndeu certo");
  }else{
      printf("\nnao deu certo");
  }

  

  x = pilha_cheia (pi);
  if (x == 1)
    {
      printf ("\ncheia");
    }
  else
    {
      printf ("\npilha nao cheia");
    }

  x = pilha_vazia (pi);
  if (x == 1)
    {
      printf ("\npilha vazia");
    }
  else
    {
      printf ("\npilha nao vazia");
    }
    
    x = tamanho_pilha (pi);
    printf ("\ntotal e:%d", x);
    
    x=remove_pilha(pi);
  return 0;
}
