#include "duplamente.h"

struct lista
{
	TNO *prim;
	TNO *fim;
};

struct no
{
	int valor;
	struct no *anterior;
	struct no *prox;
};

TLISTA *criar_lista()
{

	TLISTA *novoNO = (TLISTA*)malloc(sizeof(TLISTA));
	if(novoNO == NULL)
	{
		printf("ERRO\n");
		return 0;
	}
	else
	{
		novoNO->prim = NULL;
		novoNO->fim = NULL;
		return novoNO;
	}
}

int lista_vazia(TLISTA *li)
{
	if(li->prim == NULL || li == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int tamanho(TLISTA *li)
{
	int cont = 0;
	TNO *aux = li->prim;
	while(aux != NULL)
	{
		aux = aux->prox;
		cont++;
	}
	return cont;
}

int inserir_inicio(TLISTA *li, int valor)
{
	if(li == NULL)
		return 0;
	TNO *novoNo = (TNO*)malloc(sizeof(TNO));
	novoNo->valor = valor;
	novoNo->anterior = NULL;
	novoNo->prox = li->prim;

	if(li->prim == NULL)
	{
		li->fim = novoNo;
	}
	else
	{
		li->prim->anterior = novoNo;
	}
	li->prim = novoNo;
	return 1;
}

void imprimir(TLISTA *li)
{
	TNO *aux = li->prim;
	int cout = 1;
	while(aux != NULL)
	{
		printf("\n\tPosicao %d = %d\n", cout, aux->valor);
		aux = aux->prox;
		cout++;
	}
}

int remover(TLISTA *li)
{
	if(li == NULL)
		return 0;
	li->prim = li->prim->prox;
	li->prim->anterior;
	return 1;
}

void menu()
{
	printf("\t[1] - Criar Lista\n");
	printf("\t[2] - Lista Vazia\n");
	printf("\t[3] - Tamanho\n");
	printf("\t[4] - Inserir no Inicio\n");
	printf("\t[5] - Imprimir\n");
	printf("\t[6] - Inserir no Final\n");
	printf("\n\t[0] - SAIR \n");
	printf("\nEscolha a opcao: ");
}

int inserir_final(TLISTA *li, int valor)
{
	if(li == NULL)
		return 0;
	TNO *novoNo = (TNO*)malloc(sizeof(TNO));

	if(novoNo == NULL)
		return 0;
	novoNo->valor = valor;
	novoNo->prox = NULL;

	if(li->prim == NULL) //LISTA VAZIA: insere inicio
	{
		novoNo->anterior = NULL;
		li->prim = novoNo;
	}
	else
	{
		TNO *aux = li->prim;
		while(aux->prox != NULL)
			aux = aux->prox;
		aux->prox = novoNo;
		novoNo->anterior = aux;
	}
	return 1;
}

// 6- inserir no final
// 7-inserir dada uma posição
// 8-remover inicio
// 9-remover dado um valor
// 10-pesquisar dado um valor


