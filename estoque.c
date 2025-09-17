#include <stdio.h>

typedef struct Estoque
{
	int codigo;
	char descricao[30];
	int quntidade;
	float preco;
} Estoque;

void CadastraProduto(Estoque produtos[100]);

int main()
{
	int menu = 0;
	int indice_codigo = 1;
	int opcao_busca = 0;
	int opcao_atualiza = 0;
	
	printf("BEM-VINDO AO GERENCIADOR DE ESTOQUE  DE PRODUTOS\n");
	printf("------------------------------------------------\n");
	printf("Cadastrar novos produtos --------------------- 1\n");
	printf("Listar produtos ------------------------------ 2\n");
	printf("Buscar produto por código -------------------- 3\n");
	printf("Atualizar quantidade em estoque -------------- 4\n");
	printf("Calcular valor total do estoque -------------- 5\n");
	printf("Sair ----------------------------------------- 6\n");
	
	scanf("%d",&menu);
	
	switch(menu)
	{
		case 1:
			CadastraProduto();
		break;
		/*case 2:
			//ListaProduto();
		break;
		case 3:
			printf("BUSCAR PRODUTO POR CÓDIGO\n: ");
			printf("------------------------------------------------\n\n");
			pont_arq = fopen("arquivo.txt","r");
	
			if(pont_arq == NULL)
			{
				printf("ERRO! O arquivo nao foi aberto!\n");
			}
			else
			{
				printf("O arquivo foi aberto com sucesso\n");
			do{
				//BuscaProduto();
				}
				fclose(pont_arq);
				printf("Continuar busca - 1 | Voltar ao menu inicial - 2 ");
				scanf("%d",&opcao_busca);
			}while(opcao_busca != 2);
		break;
		case 4:
			printf("ATUALIZAR QUANTIDADE EM ESTOQUE\n: ");
			printf("------------------------------------------------\n\n");
			
			do{
				
			AtualizaProduto();
			
			}while(opcao_atualiza != 3);
		break;
		case 5:
			// calcular valor total do estoque
		break;**/	
	}			
	return (0);
}

void CadastraProduto(Estoque produtos[100])
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

/*void ListaProduto()
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