#include "duplamente.h"

int main()
{
	int op, tot;
	int tam = 0, aux ;
	TLISTA *minhaLista = NULL;
	do
	{
		menu();
		scanf("%d", &op);
		switch(op)
		{
		case(1):
			if(minhaLista != NULL)
			{
				printf("\n\tLista ja criada\n\n");
			}
			else
			{
				minhaLista = criar_lista();
				printf("\n\tLista Criada\n\n");
			}
			break;

		case(2):
			if(lista_vazia(minhaLista) == 1)
			{
				printf("\n\tLista Vazia\n\n");
			}
			else
			{
				printf("\n\tLista Preenchida\n\n");
			}
			break;
		case(3):
			tot = tamanho(minhaLista);
			printf("\n\tTotal %d\n\n", tot);
			break;
		case(4):
			printf("\n\tValor a Inserir e: ");
			scanf("%d", &tam);
			aux = inserir_inicio(minhaLista, tam);
			if(aux == 1)
			{
				printf("\n\tValor Inserido no INICIO\n\n");
			}
			else
			{
				printf("\ntNao conseguimos inserir no INICIO\n\n");
			}
			break;
		case(5):
			imprimir(minhaLista);
			break;
		case(6):
			printf("\n\tValor a Inserir e: ");
			scanf("%d", &tam);
			aux = inserir_final(minhaLista, tam);
			if(aux == 1)
			{
				printf("\n\tValor Inserido no FINAL\n\n");
			}
			else
			{
				printf("\ntNao conseguimos inserir no FINAL\n\n");
			}
			break;
		default:
			break;
		}
	}
	while(op != 0);
	return 0;
}
