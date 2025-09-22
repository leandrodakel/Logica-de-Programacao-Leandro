#include <stdio.h>

typedef struct Estoque
{
	int codigo;
	char descricao[30];
	int quantidade;
	float preco;
} Estoque;

int main()
{
	FILE *pont_arq;
	FILE *pont_arq2;
	int menu = 0;
	int indice_codigo = 0;
	int cadastro = 0;
	int opcao_busca = 0;
	int opcao_atualiza = 0;
	Estoque produtos[100];
	float acumulador = 0.0;
	int y = 0;
	int t = 0;
	
	printf("BEM-VINDO AO GERENCIADOR DE ESTOQUE  DE PRODUTOS\n");
	printf("------------------------------------------------\n");
	printf("Cadastrar novos produtos --------------------- 1\n");
	printf("Listar produtos ------------------------------ 2\n");
	printf("Buscar produto por codigo -------------------- 3\n");
	printf("Atualizar quantidade em estoque -------------- 4\n");
	printf("Calcular valor total do estoque -------------- 5\n");
	printf("Sair ----------------------------------------- 6\n");
	
	scanf("%d",&menu);
	
	switch(menu)
	{
		case 1:
			printf("CADASTRO DE PRODUTOS\n: ");
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
				int k = 1;
				for(int i = 0; i < cadastro; i++)
				{
					printf("Informe o código do produto 0%d : ",k);
					scanf("%d",&produtos[i].codigo);
					printf("Informe o descrição do produto 0%d : ",k);
					scanf(" %[^\n]",produtos[i].descricao);
					printf("Informe a quantidade do produto 0%d : ",k);
					scanf("%d",&produtos[i].quantidade);
					printf("Informe o preço do produto 0%d : ",k);
					scanf("%f",&produtos[i].preco);
					fprintf(pont_arq,"%d\n%s\n%d\n%.2f\n",produtos[i].codigo,produtos[i].descricao,produtos[i].quantidade,produtos[i].preco);
					k++;
					printf("------------------------\n\n");
				}
				fclose(pont_arq);
			}
		break;
		case 2:
			printf("LISTAR PRODUTOS\n: ");
			printf("------------------------------------------------\n\n");	

			pont_arq = fopen("estoque.txt","r");
			
			while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&produtos[y].codigo,produtos[y].descricao,&produtos[y].quantidade,&produtos[y].preco) != EOF)
			{
				printf("Codigo: %d\n Descricao: %s\n Quantidade: %d\n Preco: %.2f\n\n",produtos[y].codigo,produtos[y].descricao,produtos[y].quantidade,produtos[y].preco);
				y++;
			}
			y = 0;
			printf("------------------------------------------------\n\n");	
			fclose(pont_arq);
		break;
		case 3:
			printf("BUSCAR PRODUTO POR CODIGO\n: ");
			printf("------------------------------------------------\n\n");
			
			pont_arq = fopen("estoque.txt","r");
	
				
				while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&produtos[y].codigo,produtos[y].descricao,&produtos[y].quantidade,&produtos[y].preco) != EOF)
				{
					y++;
				}
								
				do{
					printf("Informe o codigo do produto: ");
					scanf("%d",&indice_codigo);
					
					for(int i = 0; i < y; i++)
					{	
						if(produtos[i].codigo == indice_codigo)
						{
							printf("Codigo: %d\n",produtos[i].codigo);
							printf("Descricao: %s\n",produtos[i].descricao);
							printf("Quantidade: %d\n",produtos[i].quantidade);
							printf("Preco unitario: %.2f\n\n",produtos[i].preco);
							printf("--------------------------\n\n");
							t = 1;
						}
						
					}
					if(t == 0)
					{
						printf("Produto nao encontrado!\n\n");
					}
					
					printf("Continuar busca - 1 | Voltar ao menu inicial - 2 ");
					scanf("%d",&opcao_busca);
					t = 0;
					
				}while(opcao_busca != 2);
			
			fclose(pont_arq);
			
		break;
		case 4:
			printf("ATUALIZAR QUANTIDADE EM ESTOQUE\n: ");
			printf("------------------------------------------------\n\n");
			
			do{
				
				printf("Adicionar quantidade - 1 | Remover produto - 2 | Voltar ao menu inicial - 3 ");
				scanf("%d",&opcao_atualiza);
			
				switch(opcao_atualiza)
				{
					case 1:			
						pont_arq = fopen("estoque.txt","r");		
						if(pont_arq == NULL)
						{
							printf("ERRO! O arquivo nao foi aberto!\n\n");
						}
						else
						{
							printf("O arquivo foi aberto com sucesso\n\n");
							while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&produtos[y].codigo,produtos[y].descricao,&produtos[y].quantidade,&produtos[y].preco) != EOF)
							{
								y++;
							}
							
							fclose(pont_arq);
							
							printf("ATUALIZAR QUANTIDADE \n: ");
							printf("------------------------------------------------\n");
							printf("Informe o código do produto: ");
							scanf("%d",&indice_codigo);
							printf("------------------------------------------------\n\n");
							
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
										printf("--------------------------\n\n");
										t = 1;
									}
									if(t == 0)
									{
										printf("Produto nao encontrado!\n\n");
									}
							
								}
							}while(t != 1);
							
							y = 0;							
							pont_arq = fopen("estoque.txt","w");	
							
							for(int i = 0; i < y; i++)
							{
								fprintf(pont_arq,"%d\n%s\n%d\n%.2f\n",produtos[i].codigo,produtos[i].descricao,produtos[i].quantidade,produtos[i].preco);
							}
							
							printf("Estoque atualizado!\n\n");
							
							fclose(pont_arq);
							
						}
					break;
					case 2:
						pont_arq = fopen("estoque.txt","r");	
						
						if(pont_arq == NULL)
						{
							printf("ERRO! O arquivo nao foi aberto!\n\n");
						}
						else
						{
							printf("O arquivo foi aberto com sucesso\n\n");
							
							while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&produtos[y].codigo,produtos[y].descricao,&produtos[y].quantidade,&produtos[y].preco) != EOF)
							{
								y++;
							}
							
							fclose(pont_arq);	
							
							pont_arq = fopen("estoque.txt","w");
							
							printf("REMOVER PRODUTO\n: ");
							printf("------------------------------------------------\n");
							printf("Informe o codigo do produto a ser removido: ");
							scanf("%d",&indice_codigo);
							
							for(int i = 0; i < y; i++)
							{
								if(produtos[i].codigo != indice_codigo)
								{
									fprintf(pont_arq,"%d\n%s\n%d\n%.2f\n",produtos[i].codigo,produtos[i].descricao,produtos[i].quantidade,produtos[i].preco);
								}
							}
						}
						
						fclose(pont_arq);	
					break;
				}	
			}while(opcao_atualiza != 3);
		break;
		case 5:
			pont_arq = fopen("estoque.txt","r");	
			
			printf("\nVALOR TOTAL DO ESTOQUE\n: ");
			printf("------------------------------------------------\n\n");				
			while(fscanf(pont_arq,"%d\n%s\n%d\n%f\n",&produtos[y].codigo,produtos[y].descricao,&produtos[y].quantidade,&produtos[y].preco) != EOF)
			{
				y++;
			}
			
			for(int i = 0; i < y; i++)
			{
				acumulador += produtos[i].quantidade * produtos[i].preco;
							
			}
			printf("%.2f\n",acumulador);
			printf("--------------------------------------------------\n\n");	
			fclose(pont_arq);
			
		break;	
	}			
	return (0);
}

/*void CadastraProduto(Estoque produtos[100])
{
	printf("CADASTRO DE PRODUTOS\n: ");
	printf("------------------------------------------------\n\n");
	int cadastro = 0;
	printf("Informe quantos produtos deseja cadastrar: ");
	scanf("%d",&cadastro);
			
	Estoque produtos[100];
			
	pont_arq = fopen("estoque.txt","w");
			
					
	if(pont_arq == NULL)
	{
		printf("ERRO! O arquivo nao foi aberto!\n\n");
	}
	else
	{
		printf("O arquivo foi aberto com sucesso\n\n");
		int k = 1;
		for(int i = 0; i < cadastro; i++)
		{
			printf("Informe o código do produto 0%d : ",k);
			scanf(" %d",&produtos[i].codigo);
			printf("Informe o descrição do produto 0%d : ",k);
			scanf(" %[^\n]",produtos[i].descricao);
			printf("Informe a quantidade do produto 0%d : ",k);
			scanf("%d",&produtos[i].quantidade);
			printf("Informe o preço do produto 0%d : ",k);
			scanf("%f",&produtos[i].preco);
			fprintf(pont_arq,"%d\n%s\n%d\n%.2f",codigo,descricao,quantidade,preco);
			k++;
			printf("------------------------\n\n");
		}
		printf("LISTAR PRODUTOS\n: ");
		printf("------------------------------------------------\n\n");				
		while(fscanf(pont_arq,"%d\n%s\n%d\n%f\n",&codigo,descricao,&quantidade,&preco) != EOF)
			{
				printf("%d\n%s\n%d\n%f\n\n",codigo,descricao,quantidade,preco);
			}
			printf("------------------------------------------------\n\n");	
			fclose(pont_arq);
	}
}

void ListaProduto()
{
	printf("LISTAR PRODUTOS\n: ");
	printf("------------------------------------------------\n\n");				
	while(fscanf(pont_arq,"%d\n%s\n%d\n%f\n",&codigo,descricao,&quantidade,&preco) != EOF)
		{
			printf("%d\n%s\n%d\n%f\n\n",codigo,descricao,quantidade,preco)
		}
	printf("------------------------------------------------\n\n");	
	fclose(pont_arq);
}

void BuscaProduto()
{
	int indice_codigo = 1;
	if(indice >= 0 && indice <= cadastro)
	{
		printf("Informe o código do produto: ")
		scanf("%d",&indice_codigo);
		indice_codigo--;
					
		printf("Código: %d\n",produtos[indice_codigo].codigo);
		printf("Descrição: %s\n",produtos[indice_codigo].descricao);
		printf("Quantidade: %d\n",produtos[indice_codigo].quantidade);
		printf("Preço unitáriio: %.2f\n\n",produtos[indice_codigo].preco);
		printf("--------------------------\n\n");
	}
}

void AtualizaProduto()
{
	printf("Adicionar produto - 1 | Remover produto - 2 | Voltar ao menu inicial - 3");
	scanf("%d",&opcao_atualiza);
			
	switch(opcao_atualiza)
	{
		case 1:			
			pont_arq = fopen("estoque.txt","a");		
			if(pont_arq == NULL)
			{
				printf("ERRO! O arquivo nao foi aberto!\n\n");
			}
			else
			{
				printf("O arquivo foi aberto com sucesso\n\n");
				int contador = 1;
				printf("ADICIONAR PRODUTO\n: ");
				printf("------------------------------------------------\n");
				printf("Informe quantos produtos deseja cadastrar: ");
				scanf("%d",&cadastro);
				printf("------------------------------------------------\n\n");
			
				for(int i = 0; i < cadastro; i++)
				{
					printf("Informe o código do produto 0%d : ",k);
					scanf(" %d",&produtos[i].codigo);
					printf("Informe o descrição do produto 0%d : ",k);
					scanf(" %[^\n]",produtos[i].descricao);
					printf("Informe a quantidade do produto 0%d : ",k);
					scanf("%d",&produtos[i].quantidade);
					printf("Informe o preço do produto 0%d : ",k);
					scanf("%f",&produtos[i].preco);
					fprintf(pont_arq,"%d\n%s\n%d\n%.2f",codigo,descricao,quantidade,preco);
					contador++;
					printf("------------------------\n\n");
				}
				printf("LISTAR PRODUTOS\n: ");
				printf("------------------------------------------------\n\n");				
				while(fscanf(pont_arq,"%d\n%s\n%d\n%f\n",&codigo,descricao,&quantidade,&preco) != EOF)
				{
					printf("%d\n%s\n%d\n%f\n\n",codigo,descricao,quantidade,preco);
				}
				printf("------------------------------------------------\n\n");	
				fclose(pont_arq);
			}
		break;
		case 2:
			// remover arquivos??
		break;
	}
}**/