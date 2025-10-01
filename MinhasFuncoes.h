void Menu();
void CadastraProduto(Estoque * pnt_deposito);
void ListaProduto(Estoque * pnt_deposito);
void BuscaProduto(Estoque * pnt_deposito);
void AtualizaProduto(Estoque  * pnt_deposito);
void CalculaTotal(Estoque  * pnt_deposito);

void Menu()
{
	printf("\n");
	
	printf("=================================================\n");
	printf("|            *** B E M - V I N D O ***          |\n");
	printf("|       GERENCIADOR DE ESTOQUE DE PRODUTOS      |\n");
	printf("|===============================================|\n");
	printf("|-----------------------------------------------|\n");
	printf("|                                               |\n");
	printf("|   Cadastrar produtos -------------------- 1   |\n");
	printf("|   Listar produtos ----------------------- 2   |\n");
	printf("|   Buscar produto por codigo ------------- 3   |\n");
	printf("|   Atualizar quantidade em estoque ------- 4   |\n");
	printf("|   Calcular valor total do estoque ------- 5   |\n");
	printf("|   Sair ---------------------------------- 6   |\n");
	printf("|                                               |\n");
	printf("|-----------------------------------------------|\n");
	printf("=================================================\n");
}


void CadastraProduto(Estoque * pnt_deposito)
{
	FILE *pont_arq;
	int k = 1;
	int cadastro = 0;
	
	
	pont_arq = fopen("estoque.txt","a");
				
	if(pont_arq == NULL)
	{
		printf("ERRO! O arquivo nao foi aberto!\n\n");
	}
	else
	{
		printf("O arquivo foi aberto com sucesso\n\n");
		
		printf("\nCADASTRO DE PRODUTOS\n");
		printf("------------------------------------------------\n\n");	
		printf("Informe quantos produtos deseja cadastrar: ");
		scanf("%d",&cadastro);
		
		for(int i = 0; i < cadastro; i++)
		{
		
			printf("Informe o codigo do produto 0%d : ",k);
			scanf("%d",&pnt_deposito[i].codigo);
			printf("Informe o descricao do produto 0%d : ",k);
			scanf(" %[^\n]",pnt_deposito[i].descricao);
			printf("Informe a quantidade do produto 0%d : ",k);
			scanf("%d",&pnt_deposito[i].quantidade);
			printf("Informe o preco do produto 0%d : ",k);
			scanf("%f",&pnt_deposito[i].preco);
			printf("\n");	
			fprintf(pont_arq,"%d\n%s\n%d\n%.2f\n",pnt_deposito[i].codigo,pnt_deposito[i].descricao,pnt_deposito[i].quantidade,pnt_deposito[i].preco);
			k++;
			printf("------------------------------------------------\n\n");	
		}
			fclose(pont_arq);
	}
	system("cls");
	printf("\n\nCADASTRO CONCLUIDO\n\n");
}
	
void ListaProduto(Estoque * pnt_deposito)
{
	FILE *pont_arq;
	int y = 0;
	
	printf("\nLISTA DE PRODUTOS\n");
	printf("------------------------------------------------\n\n");	
	pont_arq = fopen("estoque.txt","r");
	
	printf("================================================================\n");
	printf("| COD |        DESCRICAO         | QUANTIDADE | VALOR UNITARIO |\n");
	printf("================================================================\n");
	while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&pnt_deposito[y].codigo,pnt_deposito[y].descricao,&pnt_deposito[y].quantidade,&pnt_deposito[y].preco) != EOF)
	{
		printf("|%5d|%26s|%12d|%16.2lf|\n",pnt_deposito[y].codigo,pnt_deposito[y].descricao,pnt_deposito[y].quantidade,pnt_deposito[y].preco);
		y++;
	}
	printf("================================================================\n");	
	fclose(pont_arq);
}

void BuscaProduto(Estoque * pnt_deposito)
{
	FILE *pont_arq;
	int menu_busca = 0;
	int y = 0;
	int t = 0;
	int indice_codigo = 0;
	
	pont_arq = fopen("estoque.txt","r");
	while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&pnt_deposito[y].codigo,pnt_deposito[y].descricao,&pnt_deposito[y].quantidade,&pnt_deposito[y].preco) != EOF)
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
			if(pnt_deposito[i].codigo == indice_codigo)
			{
				printf("================================================================\n");
				printf("| COD |        DESCRICAO         | QUANTIDADE | VALOR UNITARIO |\n");
				printf("================================================================\n");
				printf("|%5d|%26s|%12d|%16.2lf|\n",pnt_deposito[i].codigo,pnt_deposito[i].descricao,pnt_deposito[i].quantidade,pnt_deposito[i].preco);
				printf("================================================================\n");
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
	system("cls");
	printf("\n\nBUSCA ENCERRADA\n\n");
	fclose(pont_arq);
}

void AtualizaProduto(Estoque * pnt_deposito)
{
	FILE *pont_arq;
	int menu_atualiza = 0;
	int quantidade = 0;
	int y = 0;
	int a = 2;
	int r = 0;
	char s;
	int indice_codigo = 0;
	y = 0;
	
	do{
		printf("\nATUALIZAR ESTOQUE\n");
		printf("------------------------------------------------\n\n");
		printf("Atualizar quantidade - 1\nRemover produto - 2\nVoltar ao menu inicial - 3 ");
		scanf("%d",&menu_atualiza);
		system("cls");	
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
					while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&pnt_deposito[y].codigo,pnt_deposito[y].descricao,&pnt_deposito[y].quantidade,&pnt_deposito[y].preco) != EOF)
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
							if(pnt_deposito[i].codigo == indice_codigo)
							{
								printf("Codigo: %d\n",pnt_deposito[i].codigo);
								printf("Descricao: %s\n",pnt_deposito[i].descricao);
								printf("Quantidade: %d\n",pnt_deposito[i].quantidade);
								printf("Preco unitario: %.2f\n\n",pnt_deposito[i].preco);
								printf("Informe a nova quantidade: ");
								scanf("%d",&quantidade);
								pnt_deposito[i].quantidade = quantidade;
								printf("\n\n------------------------------------------------\n\n");
								printf("\n\nESTOQUE ATUALIZADO\n");
								printf("================================================================\n");
								printf("| COD |        DESCRICAO         | QUANTIDADE | VALOR UNITARIO |\n");
								printf("===============================================================|\n");
								printf("|%5d|%26s|%12d|%16.2lf|\n",pnt_deposito[i].codigo,pnt_deposito[i].descricao,pnt_deposito[i].quantidade,pnt_deposito[i].preco);
								printf("================================================================\n");
								
								a = 1;
							}
							if(a == 0)
							{
								printf("PRODUTO NAO ENCONTRADO!\n\n");
								printf("\n\n------------------------------------------------\n\n");
							}	
						}
					}while(a != 1);	
					pont_arq = fopen("estoque.txt","w");	
					for(int i = 0; i < y; i++)
					{
						fprintf(pont_arq,"%d\n%s\n%d\n%.2f\n",pnt_deposito[i].codigo,pnt_deposito[i].descricao,pnt_deposito[i].quantidade,pnt_deposito[i].preco);
					}
					
					y = 0;					
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
					while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&pnt_deposito[y].codigo,pnt_deposito[y].descricao,&pnt_deposito[y].quantidade,&pnt_deposito[y].preco) != EOF)
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
							if(pnt_deposito[i].codigo == indice_codigo)
							{
								printf("\n\nPRODUTO ENCONTRADO\n");
								printf("================================================================\n");
								printf("| COD |        DESCRICAO         | QUANTIDADE | VALOR UNITARIO |\n");
								printf("|===============================================================\n");
								printf("|%5d|%26s|%12d|%16.2lf|\n",pnt_deposito[i].codigo,pnt_deposito[i].descricao,pnt_deposito[i].quantidade,pnt_deposito[i].preco);
								printf("================================================================\n");
								r = 1;	
							}
						}
						for(int i = 0; i < y; i++)
						{
							if(pnt_deposito[i].codigo != indice_codigo)
							{
								fprintf(pont_arq,"%d\n%s\n%d\n%.2f\n",pnt_deposito[i].codigo,pnt_deposito[i].descricao,pnt_deposito[i].quantidade,pnt_deposito[i].preco);
							}
						}
						if(r == 0)
						{
							printf("PRODUTO NAO ENCONTRADO!\n\n");
							break;
						}
						else if(r == 1)
						{
							printf("PRODUTO REMOVIDO!\n\n");
						}
					}while(r != 1);
				}
				fclose(pont_arq);		
			break;
		}			
	}while(menu_atualiza != 3);	
	printf("\n\nESTOQUE ATUALIZADO\n\n");
}

void CalculaTotal(Estoque * pnt_deposito)
{
	FILE *pont_arq;
	float acumulador = 0.0;
	int y = 0;
	
	pont_arq = fopen("estoque.txt","r");		
	printf("\nVALOR TOTAL DO ESTOQUE\n");
	printf("------------------------------------------------\n\n");				
	while(fscanf(pont_arq,"%d\n%[^\n]\n%d\n%f\n",&pnt_deposito[y].codigo,pnt_deposito[y].descricao,&pnt_deposito[y].quantidade,&pnt_deposito[y].preco) != EOF)
	{
		y++;
	}
	for(int i = 0; i < y; i++)
	{
		acumulador += pnt_deposito[i].quantidade * pnt_deposito[i].preco;
	}
	printf("R$ %.2f\n",acumulador);
	printf("\n------------------------------------------------\n\n");
	fclose(pont_arq);	
}