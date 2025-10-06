#include <stdio.h>
#include <windows.h>

typedef struct Estoque
{
	char produto[25];
	int codigo;
	int quantidade;
	double preco_unitario;
}estq;

#include "MinhasFuncoesAtualizado.h"

int main()
{
	int escolha = 0;
	estq deposito[1000];
	
	/*INICIALIZO MEU VETOR DE ESTRUTURA TODO NULO*/
	NullStruct(deposito);
	
	do
	{
		Menu();
		scanf("%d",&escolha);
		switch(escolha)
		{
			/*CADASTRO DE PRODUTOS NO ARQUIVO*/
			case 1:
				CadastroDeProdutos(deposito);
			break;
			/*LISTAR PRODUTOS DO ARQUIVO*/
			case 2:
				ListarProdutos(deposito);
			break;
			/*BUSCAR PRODUTOS DO ARQUIVO POR CODIGO*/
			case 3:
				BuscarProdutos(deposito);
			break;
			/*ALTERAR QUANTIDADE DE PRODUTOS DO ESTOQUE POR CODIGO*/
			case 4:
				AlterarQuantidadeProdutos(deposito);
			break;
			/*CALCULAR VALOR TOTAL DE PRODUTOS NO ESTOQUE*/
			case 5:
				CalcularValorTotalEstoque(deposito);
			break;
			/*ORDENAR MINHAS LISTAGEM POR FILTROS */
			case 6:
				FiltrarOrdenar(deposito);
			break;
			/*APAGAR MEU BANCO DE DADOS */
			case 7:
				ApagarOsDadosDoSistema(deposito);
				system("cls");
				printf("\nEXCLUSAO CONCLUIDA\n");
			break;
			/*FINALIZAR O SISTEMA*/
			case 8:
				system("cls");
				printf("Sistema Finalizado\n");
			break;
			
			default:
				system("cls");
				printf("\nATENCAO: Escolha uma das opcoes disponiveis no menu!\n\n");
		}
		
	}while(escolha != 8);
	
	return(0);
}