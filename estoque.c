#include <stdio.h>

typedef struct Estoque
{
	int codigo;
	char descricao[30];
	int quantidade;
	float preco;
} Estoque;

void CadastraProduto();
void ListaProduto();
void BuscaProduto();
void AtualizaProduto();
void CalculaTotal();


int main()
{
	int menu = 0;
	int opcao = 0;
		
	do{
		printf("\n");
		printf("-------------------------------------------------\n");
		printf("|BEM-VINDO AO GERENCIADOR DE ESTOQUE DE PRODUTOS|\n");
		printf("|-----------------------------------------------|\n");
		printf("|Cadastrar produtos -------------------------- 1|\n");
		printf("|Listar produtos ----------------------------- 2|\n");
		printf("|Buscar produto por codigo ------------------- 3|\n");
		printf("|Atualizar quantidade em estoque ------------- 4|\n");
		printf("|Calcular valor total do estoque ------------- 5|\n");
		printf("|Sair ---------------------------------------- 6|\n");
		printf("------------------------------------------------- ");
		scanf("%d",&menu);
		switch(menu)
		{
			case 1:
				CadastraProduto();
				
			break;
			case 2:
				ListaProduto();
				
			break;
			case 3:
				BuscaProduto();
				
			break;
			case 4:
				AtualizaProduto();
				
			break;
			case 5:
				CalculaTotal();
				
			break;
			case 6:
				printf("Confirmar saida - 6: ");
				scanf("%d",&opcao);
			break;
		}
	}while(opcao != 6);	
	return (0);
}

void CadastraProduto()
{
	FILE *pont_arq;
	Estoque produtos[1000];
	int k = 1;
	int cadastro = 0;
	
	printf("\nCADASTRO DE PRODUTOS\n");
	printf("------------------------------------------------\n\n");	
	printf("Informe quantos produtos deseja cadastrar: ");
	scanf("%d",&cadastro);				
	pont_arq = fopen("estoque.txt","a");
	if(pont_arq == NULL)
	{
		printf("ERRO! O arquivo nao foi aberto!\n\n");
	}
	else
	{
		printf("O arquivo foi aberto com sucesso\n\n");
		for(int i = 0; i < cadastro; i++)
		{
			printf("Informe o codigo do produto 0%d : ",k);
			scanf("%d",&produtos[i].codigo);
			printf("Informe o descricao do produto 0%d : ",k);
			scanf(" %[^\n]",produtos[i].descricao);
			printf("Informe a quantidade do produto 0%d : ",k);
			scanf("%d",&produtos[i].quantidade);
			printf("Informe o preco do produto 0%d : ",k);
			scanf("%f",&produtos[i].preco);
			printf("\n");	
			fprintf(pont_arq,"%d\n%s\n%d\n%.2f\n",produtos[i].codigo,produtos[i].descricao,produtos[i].quantidade,produtos[i].preco);
			k++;
			printf("------------------------------------------------\n\n");	
		}
			fclose(pont_arq);
	}
}
	
void ListaProduto()
{
	FILE *pont_arq;
	Estoque produtos[1000];
	int y = 0;
	
	printf("\nLISTA DE PRODUTOS\n");
	printf("------------------------------------------------\n\n");	
	pont_arq = fopen("estoque.txt","r");
	while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&produtos[y].codigo,produtos[y].descricao,&produtos[y].quantidade,&produtos[y].preco) != EOF)
	{
		printf("Codigo: %d\nDescricao: %s\nQuantidade: %d\nPreco: %.2f\n\n",produtos[y].codigo,produtos[y].descricao,produtos[y].quantidade,produtos[y].preco);
		y++;
	}
	printf("------------------------------------------------\n\n");	
	fclose(pont_arq);
}

void BuscaProduto()
{
	FILE *pont_arq;
	Estoque produtos[1000];
	int menu_busca = 0;
	int y = 0;
	int t = 0;
	int indice_codigo = 0;
	
	pont_arq = fopen("estoque.txt","r");
	while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&produtos[y].codigo,produtos[y].descricao,&produtos[y].quantidade,&produtos[y].preco) != EOF)
	{
		y++;
	}				
	do{
		printf("\nBUSCA DE PRODUTO POR CODIGO\n");
		printf("------------------------------------------------\n\n");
		printf("Informe o codigo do produto: ");
		scanf("%d",&indice_codigo);
		for(int i = 0; i < y; i++)
		{	
			if(produtos[i].codigo == indice_codigo)
			{
				printf("\nCodigo: %d\n",produtos[i].codigo);
				printf("Descricao: %s\n",produtos[i].descricao);
				printf("Quantidade: %d\n",produtos[i].quantidade);
				printf("Preco unitario: %.2f\n\n",produtos[i].preco);
				printf("------------------------------------------------\n\n");
				t = 1;
			}		
		}
		if(t == 0)
		{
			printf("\nProduto nao encontrado!\n\n");
			printf("------------------------------------------------\n\n");
		}
		printf("Continuar busca - 1 | Voltar ao menu - 2 ");
		scanf("%d",&menu_busca);
		printf("\n");
		t = 0;
	}while(menu_busca != 2);
	fclose(pont_arq);
}

void AtualizaProduto()
{
	FILE *pont_arq;
	Estoque produtos[1000];
	int menu_atualiza = 0;
	int y = 0;
	int a = 0;
	int r = 0;
	int indice_codigo = 0;
	y = 0;
	
	do{
		printf("\nATUALIZAR ESTOQUE\n");
		printf("------------------------------------------------\n\n");
		printf("Adicionar quantidade - 1\nRemover produto - 2\nVoltar ao menu inicial - 3 ");
		scanf("%d",&menu_atualiza);
			
		switch(menu_atualiza)
		{
			case 1:			
				pont_arq = fopen("estoque.txt","r");		
				if(pont_arq == NULL)
				{
					printf("\nERRO! O arquivo nao foi aberto!\n\n");
				}
				else
				{
					printf("\nO arquivo foi aberto com sucesso\n\n");
					while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&produtos[y].codigo,produtos[y].descricao,&produtos[y].quantidade,&produtos[y].preco) != EOF)
					{
						y++;
					}
					fclose(pont_arq);
					printf("ATUALIZAR QUANTIDADE\n");
					printf("------------------------------------------------\n\n");
					printf("Informe o codigo do produto: ");
					scanf("%d",&indice_codigo);
					printf("\n\n");
					do{
						for(int i = 0; i <= y; i++)
						{	
							if(produtos[i].codigo == indice_codigo)
							{
								printf("Codigo: %d\n",produtos[i].codigo);
								printf("Descricao: %s\n",produtos[i].descricao);
								printf("Quantidade: %d\n",produtos[i].quantidade);
								printf("Preco unitario: %.2f\n\n",produtos[i].preco);
								printf("Informe a nova quantidade: ");
								scanf("%d",&produtos[i].quantidade);
								printf("\n\n------------------------------------------------\n\n");
								a = 1;
							}
							if(a == 0)
							{
								printf("Produto nao encontrado!\n\n");
								printf("\n\n------------------------------------------------\n\n");
							}	
						}
					}while(a != 1);	
					pont_arq = fopen("estoque.txt","w");	
					for(int i = 0; i < y; i++)
					{
						fprintf(pont_arq,"%d\n%s\n%d\n%.2f\n",produtos[i].codigo,produtos[i].descricao,produtos[i].quantidade,produtos[i].preco);
					}
					y = 0;					
					printf("Estoque atualizado!\n\n");
					fclose(pont_arq);	
				}
			break;
			case 2:
				pont_arq = fopen("estoque.txt","r");	
				if(pont_arq == NULL)
				{
					printf("\nERRO! O arquivo nao foi aberto!\n\n");
				}
				else
				{
					printf("\nO arquivo foi aberto com sucesso\n\n");
					while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&produtos[y].codigo,produtos[y].descricao,&produtos[y].quantidade,&produtos[y].preco) != EOF)
					{
						y++;
					}
					fclose(pont_arq);	
					pont_arq = fopen("estoque.txt","w");
					printf("REMOVER PRODUTO\n");
					printf("------------------------------------------------\n\n");
					printf("Informe o codigo do produto a ser removido: ");
					scanf("%d",&indice_codigo);
					printf("\n");
					do{
						for(int i = 0; i < y; i++)
						{
							if(produtos[i].codigo == indice_codigo)
							{
								r = 1;
							}
						}
						for(int i = 0; i < y; i++)
						{
							if(produtos[i].codigo != indice_codigo)
							{
								fprintf(pont_arq,"%d\n%s\n%d\n%.2f\n",produtos[i].codigo,produtos[i].descricao,produtos[i].quantidade,produtos[i].preco);
							}
						}
						if(r == 0)
						{
							printf("Produto nao encontrado!\n\n");
							break;
						}
						else if(r == 1)
						{
							printf("Produto removido!\n\n");
						}
					}while(r != 1);
				}
				fclose(pont_arq);		
			break;
		}			
	}while(menu_atualiza != 3);	
}

void CalculaTotal()
{
	FILE *pont_arq;
	Estoque produtos[1000];
	float acumulador = 0.0;
	int y = 0;
	
	pont_arq = fopen("estoque.txt","r");		
	printf("\nVALOR TOTAL DO ESTOQUE\n");
	printf("------------------------------------------------\n\n");				
	while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&produtos[y].codigo,produtos[y].descricao,&produtos[y].quantidade,&produtos[y].preco) != EOF)
	{
		y++;
	}
	for(int i = 0; i < y; i++)
	{
		acumulador += produtos[i].quantidade * produtos[i].preco;
	}
	printf("R$ %.2f\n",acumulador);
	printf("\n------------------------------------------------\n\n");
	fclose(pont_arq);	
}

