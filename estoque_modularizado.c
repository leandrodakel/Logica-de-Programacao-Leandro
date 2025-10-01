#include <stdio.h>
#include <windows.h>

typedef struct Estoque
{
	int codigo;
	char descricao[30];
	int quantidade;
	float preco;
} Estoque;

#include "MinhasFuncoes.h"

int main()
{
	Estoque deposito[1000];
	int menu = 0;
			
	do{
		Menu();
		scanf("%d",&menu);
		switch(menu)
		{
			case 1:
				CadastraProduto(deposito);
			break;
			case 2:
				ListaProduto(deposito);
			break;
			case 3:
				BuscaProduto(deposito);
			break;
			case 4:
				AtualizaProduto(deposito);
			break;
			case 5:
				CalculaTotal(deposito);
			break;
			case 6:
				system("cls");
				printf("\nSISTEMA FINALIZADO\n\n");
			break;
			default:
				printf("\n\nDigite uma opcao valida\n\n");
		}
	}while(menu != 6);	
	return (0);

}