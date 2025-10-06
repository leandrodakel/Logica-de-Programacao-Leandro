void Menu();
void Filtro();
void Ordem();
void ZerarDescricao(char * descricao);
void NullStruct(estq * pnt_deposito);
void CadastroDeProdutos(estq * pnt_deposito);
void ListarProdutos(estq * pnt_deposito);
void BuscarProdutos(estq * pnt_deposito);
void AlterarQuantidadeProdutos(estq  * pnt_deposito);
void CalcularValorTotalEstoque(estq  * pnt_deposito);
void Imprimir(estq * pnt_deposito, int tam);
void BubbleSortCodigo(estq * pnt_deposito, int opcao, int tamanho);
void BubbleSortQuantidade(estq * pnt_deposito, int opcao, int tamanho);
void BubbleSortPreco(estq * pnt_deposito, int opcao, int tamanho);
int CompararPalavras(char *palavra1, char *palavra2);
void FiltrarOrdenar(estq  * pnt_deposito);
void ApagarOsDadosDoSistema(estq  * pnt_deposito);

void Menu()
{
	printf("|***********************************************|\n");
	printf("|*       BEM VINDO AO SISTEMA DE ESTOQUE       *|\n");
	printf("|*     ESCOLHA A FUNCAO QUE DESEJA UTILIZAR    *|\n");
	printf("|***********************************************|\n");
	printf("|--COD--|---------------DESCRICAO---------------|\n");
	printf("|   1   |     Cadastrar produto(s);             |\n");
	printf("|   2   |     Listar produtos;                  |\n");
	printf("|   3   |     Buscar produto por codigo;        |\n");
	printf("|   4   |     Atualizar quantidade em estoque;  |\n");
	printf("|   5   |     Calcular valor total do estoque;  |\n");
	printf("|   6   |     Filtrar e Ordenar;                |\n");
	printf("|   7   |     Apagar TODOS os Itens do estoque; |\n");
	printf("|   8   |     Encerrar programa;                |\n");
	printf("|-----------------------------------------------|\n");
	printf("|***********************************************|\n\n");
	
}

void Filtro()
{
	printf("|***********************************************|\n");
	printf("|*       ESCOLHA O PARAMETRO DE ORDENACAO       *|\n");
	printf("|*     ESCOLHA A FUNCAO QUE DESEJA UTILIZAR    *|\n");
	printf("|***********************************************|\n");
	printf("|--COD--|----------------ORDENAR----------------|\n");
	printf("|   1   |     Ordernar por nome do produto(s);  |\n");
	printf("|   2   |     Ordernar por codigo do produto;   |\n");
	printf("|   3   |     Ordernar por quantidade;          |\n");
	printf("|   4   |     Ordernar por valor do produto;    |\n");
	printf("|-----------------------------------------------|\n");
	printf("|***********************************************|\n\n");
	
}

void Ordem()
{
	printf("|***************************************************|\n");
	printf("|*         ESCOLHA O FORMA DE ORDENACAO            *|\n");
	printf("|*       ESCOLHA A OPCAO QUE DESEJA UTILIZAR       *|\n");
	printf("|***************************************************|\n");
	printf("|--COD--|----------------ORDENAR--------------------|\n");
	printf("|   1   |     Crescente - Alfabetica Crescente;     |\n");
	printf("|   2   |     Decrescente - Alfabetica Decrescente; |\n");
	printf("|---------------------------------------------------|\n");
	printf("|***************************************************|\n\n");
	
}

void ZerarDescricao(char * descricao)
{
	for(int i = 0; i < 25; i++)
	{
		descricao[i] = '\0';
	}
	
}

void NullStruct(estq * pnt_deposito)
{
		for(int i = 0; i < 1000; i++)
		{
			ZerarDescricao(pnt_deposito[i].produto);
			pnt_deposito[i].codigo = -1;
			pnt_deposito[i].quantidade = -1;
			pnt_deposito[i].preco_unitario = -1.0;
		}
}

void CadastroDeProdutos(estq  * pnt_deposito)
{
	int quantidade = 0;
	FILE * arquivo;
	
	arquivo = fopen("arquivo.txt","a");
	
	
	printf("Informe a quantidade de itens que deseja cadastrar\n");
	scanf("%d",&quantidade);
	printf("\n");
	
	if(quantidade > 1000)
	{
		printf("Nessa versão do sistemas permitimos um cadastro máximo de 1000 itens\n");
		printf("Entre em contato com o fornecedor do sistema para mais informacoes\n");
	}
	else
	{
		if(arquivo != NULL)
		{
			for(int i = 0; i < quantidade; i++)
			{
				printf("Informe o NOME do produto: ");
				scanf(" %[^\n]", pnt_deposito[i].produto);
				printf("Informe o CODIGO do produto: ");
				scanf("%d", &pnt_deposito[i].codigo);
				printf("Informe a QUANTIDADE do produto: ");
				scanf("%d", &pnt_deposito[i].quantidade);
				printf("Informe o PRECO UNITARIO do produto: ");
				scanf("%lf", &pnt_deposito[i].preco_unitario);
				printf("\n");
				
				fprintf(arquivo,"%s\n%d\n%d\n%.2lf\n",pnt_deposito[i].produto,pnt_deposito[i].codigo,pnt_deposito[i].quantidade,pnt_deposito[i].preco_unitario);
				
			}
			
			fclose(arquivo);
			system("cls");
			printf("\n\nCADASTRO CONCLUIDO\n\n");
		}
		else
		{
			printf("ERRO ao acessar o arquivo contate o administrador do sistema\n");
		}
	}
	
}

void ListarProdutos(estq  * pnt_deposito)
{
	FILE * arquivo;
	int i = 0;
	arquivo = fopen("arquivo.txt","r");
	
	if(arquivo != NULL)
	{
		printf("\n");
		printf("|==============================================================|\n");
		printf("| COD |        DESCRICAO         | QUANTIDADE | VALOR UNITARIO |\n");
		while(fscanf(arquivo,"%[^\n]\n%d\n%d\n%lf\n",pnt_deposito[i].produto,&pnt_deposito[i].codigo,&pnt_deposito[i].quantidade,&pnt_deposito[i].preco_unitario) != EOF)
		{
			printf("|%5d|%26s|%12d|%16.2lf|\n",pnt_deposito[i].codigo,pnt_deposito[i].produto,pnt_deposito[i].quantidade,pnt_deposito[i].preco_unitario);
			i++;
		}
		printf("|==============================================================|\n\n");	
		fclose(arquivo);
	}
	else
	{
		printf("ERRO ao acessar o arquivo contate o administrador do sistema\n");
	}
	
}

void BuscarProdutos(estq  * pnt_deposito)
{
	FILE * arquivo;
	int i = 0;
	int cod = 0;
	arquivo = fopen("arquivo.txt","r");
	
	printf("Informe o CODIGO do produto que deseja procurar: ");
	scanf("%d",&cod);
	
	if(arquivo != NULL)
	{
		printf("\n");
		printf("|==============================================================|\n");
		printf("| COD |        DESCRICAO         | QUANTIDADE | VALOR UNITARIO |\n");
		while(fscanf(arquivo,"%[^\n]\n%d\n%d\n%lf\n",pnt_deposito[i].produto,&pnt_deposito[i].codigo,&pnt_deposito[i].quantidade,&pnt_deposito[i].preco_unitario) != EOF)
		{
			if(pnt_deposito[i].codigo == cod)
			{
				printf("|%5d|%26s|%12d|%16.2lf|\n",pnt_deposito[i].codigo,pnt_deposito[i].produto,pnt_deposito[i].quantidade,pnt_deposito[i].preco_unitario);
			}
			i++;
		}
		printf("|==============================================================|\n\n");	
		fclose(arquivo);
	}
	else
	{
		printf("ERRO ao acessar o arquivo contate o administrador do sistema\n");
	}
	
}

void AlterarQuantidadeProdutos(estq  * pnt_deposito)
{
	FILE * arquivo;
	int i = 0;
	int cod = 0;
	int quantidade = 0;
	arquivo = fopen("arquivo.txt","r");
	
	printf("Informe o CODIGO do produto que deseja modificar: ");
	scanf("%d",&cod);
	
	if(arquivo != NULL)
	{
		printf("\n");
		printf("|==============================================================|\n");
		printf("| COD |        DESCRICAO         | QUANTIDADE | VALOR UNITARIO |\n");
		while(fscanf(arquivo,"%[^\n]\n%d\n%d\n%lf\n",pnt_deposito[i].produto,&pnt_deposito[i].codigo,&pnt_deposito[i].quantidade,&pnt_deposito[i].preco_unitario) != EOF)
		{
			if(pnt_deposito[i].codigo == cod)
			{
				printf("|%5d|%26s|%12d|%16.2lf|\n",pnt_deposito[i].codigo,pnt_deposito[i].produto,pnt_deposito[i].quantidade,pnt_deposito[i].preco_unitario);
				printf("|==============================================================|\n\n");	
				printf("informe a NOVA quantidade\n");
				scanf("%d",&quantidade);
				pnt_deposito[i].quantidade = quantidade;
			}
			i++;
		}
		fclose(arquivo);
		
		arquivo = fopen("arquivo.txt","w");
		if(arquivo != NULL)
		{
			for(int y = 0; y < i; y++)
			{
				fprintf(arquivo,"%s\n%d\n%d\n%.2lf\n",pnt_deposito[y].produto,pnt_deposito[y].codigo,pnt_deposito[y].quantidade,pnt_deposito[y].preco_unitario);
			}
			fclose(arquivo);
			system("cls");
			printf("\n\nATUALIZACAO CONCLUIDA\n\n");
		}	
		else
		{
			printf("ERRO ao acessar o arquivo contate o administrador do sistema\n");
		}
	}
	else
	{
		printf("ERRO ao acessar o arquivo contate o administrador do sistema\n");
	}
	
}

void CalcularValorTotalEstoque(estq  * pnt_deposito)
{
	FILE * arquivo;
	int i = 0;
	double valor_total_estoque = 0.0;
	arquivo = fopen("arquivo.txt","r");
	
	if(arquivo != NULL)
	{
		printf("\n");
		printf("|==============================================================|\n");
		printf("| COD |        DESCRICAO         | QUANTIDADE | VALOR UNITARIO |\n");
		while(fscanf(arquivo,"%[^\n]\n%d\n%d\n%lf\n",pnt_deposito[i].produto,&pnt_deposito[i].codigo,&pnt_deposito[i].quantidade,&pnt_deposito[i].preco_unitario) != EOF)
		{
			printf("|%5d|%26s|%12d|%16.2lf|\n",pnt_deposito[i].codigo,pnt_deposito[i].produto,pnt_deposito[i].quantidade,pnt_deposito[i].preco_unitario);
			valor_total_estoque += pnt_deposito[i].quantidade * pnt_deposito[i].preco_unitario;
			i++;
		}
		printf("|==============================================================|\n\n");	
		printf("O valor total em mercadoria em seu estoque e: R$ %.2lf\n\n",valor_total_estoque);
		fclose(arquivo);
	}
	else
	{
		printf("ERRO ao acessar o arquivo contate o administrador do sistema\n");
	}
	
}

void Imprimir(estq * pnt_deposito, int tam)
{
	int i = 0;
	printf("\n");
	printf("|==============================================================|\n");
	printf("| COD |        DESCRICAO         | QUANTIDADE | VALOR UNITARIO |\n");
	for(i = 0; i < tam; i++)
	{
		printf("|%5d|%26s|%12d|%16.2lf|\n",pnt_deposito[i].codigo,pnt_deposito[i].produto,pnt_deposito[i].quantidade,pnt_deposito[i].preco_unitario);
	}
	printf("|==============================================================|\n\n");	
}

void BubbleSortCodigo(estq * pnt_deposito, int opcao, int tamanho)
{
	estq aux;
	if(opcao == 1)
	{	
		for(int i = 0; i < tamanho; i++)
		{
			for(int k = 0; k < tamanho-1; k++)
			{
				if(pnt_deposito[i].codigo < pnt_deposito[k].codigo)
				{
					aux = pnt_deposito[i];
					pnt_deposito[i] = pnt_deposito[k];
					pnt_deposito[k] = aux;
				}
			}
		}
	}
	else
	{
		for(int i = 0; i < tamanho; i++)
		{
			for(int k = 0; k < tamanho-1; k++)
			{
				if(pnt_deposito[i].codigo > pnt_deposito[k].codigo)
				{
					aux = pnt_deposito[i];
					pnt_deposito[i] = pnt_deposito[k];
					pnt_deposito[k] = aux;
				}
			}
		}
	}
	
}

void BubbleSortQuantidade(estq * pnt_deposito, int opcao, int tamanho)
{
	estq aux;
	if(opcao == 1)
	{	
		for(int i = 0; i < tamanho; i++)
		{
			for(int k = 0; k < tamanho-1; k++)
			{
				if(pnt_deposito[i].quantidade < pnt_deposito[k].quantidade)
				{
					aux = pnt_deposito[i];
					pnt_deposito[i] = pnt_deposito[k];
					pnt_deposito[k] = aux;
				}
			}
		}
	}
	else
	{
		for(int i = 0; i < tamanho; i++)
		{
			for(int k = 0; k < tamanho-1; k++)
			{
				if(pnt_deposito[i].quantidade > pnt_deposito[k].quantidade)
				{
					aux = pnt_deposito[i];
					pnt_deposito[i] = pnt_deposito[k];
					pnt_deposito[k] = aux;
				}
			}
		}
	}
	
}

void BubbleSortPreco(estq * pnt_deposito, int opcao, int tamanho)
{
	estq aux;
	if(opcao == 1)
	{	
		for(int i = 0; i < tamanho; i++)
		{
			for(int k = 0; k < tamanho-1; k++)
			{
				if(pnt_deposito[i].preco_unitario < pnt_deposito[k].preco_unitario)
				{
					aux = pnt_deposito[i];
					pnt_deposito[i] = pnt_deposito[k];
					pnt_deposito[k] = aux;
				}
			}
		}
	}
	else
	{
		for(int i = 0; i < tamanho; i++)
		{
			for(int k = 0; k < tamanho-1; k++)
			{
				if(pnt_deposito[i].preco_unitario > pnt_deposito[k].preco_unitario)
				{
					aux = pnt_deposito[i];
					pnt_deposito[i] = pnt_deposito[k];
					pnt_deposito[k] = aux;
				}
			}
		}
	}
	
}

int TamanhoPalavra(char * palavra)
{
	int i = 0;
	while(palavra[i] != '\0')
	{
		i++;
	}
	
	return(i);
}

int CompararPalavras(char *palavra1, char *palavra2)
{
    int i = 0;

    while (palavra1[i] != '\0' && palavra2[i] != '\0')
    {
        if (palavra1[i] < palavra2[i])
        {
           return(0);
        }
        else if (palavra1[i] > palavra2[i])
        {
			return(1);
		}
        i++;
    }

    // Se cheguei aqui, as duas são iguais até o fim de uma delas
    if (palavra1[i] == '\0' && palavra2[i] == '\0')
    {
         return(0);
    }
    else if (palavra1[i] == '\0')
    {
		return(0);
    }
    else
    {
		return(1);
    }
}


void BubbleSortDescricao(estq * pnt_deposito, int opcao, int tamanho)
{
	estq aux;
	int troca = -1;

	for(int i = 0; i < tamanho; i++)
	{
		for(int k = 0; k < tamanho-1; k++)
		{
			if(opcao == 1)
			{
				troca = CompararPalavras(pnt_deposito[i].produto,pnt_deposito[k].produto);
				if(!troca)
				{
					aux = pnt_deposito[i];
					pnt_deposito[i] = pnt_deposito[k];
					pnt_deposito[k] = aux;
				}
			}
			else
			{
				troca = CompararPalavras(pnt_deposito[i].produto,pnt_deposito[k].produto);
				if(troca)
				{
					aux = pnt_deposito[i];
					pnt_deposito[i] = pnt_deposito[k];
					pnt_deposito[k] = aux;
				}
			}
		}
	}
}

void FiltrarOrdenar(estq  * pnt_deposito)
{
	FILE * arquivo;
	int i = 0;
	int escolha = 0;
	arquivo = fopen("arquivo.txt","r");
	system("cls");
	if(arquivo != NULL)
	{
		while(fscanf(arquivo,"%[^\n]\n%d\n%d\n%lf\n",pnt_deposito[i].produto,&pnt_deposito[i].codigo,&pnt_deposito[i].quantidade,&pnt_deposito[i].preco_unitario) != EOF)
		{
			i++;
		}
		fclose(arquivo);		
		printf("Escolha como desenha ordenar sua listagem\n");
		Filtro();
		scanf("%d",&escolha);
		system("cls");
		switch(escolha)
		{
			//Ordenar por Nome do produto(s);
			case 1:
				printf("Informe a ordem que deseja\n");
				Ordem();
				scanf("%d",&escolha);
				switch(escolha)
				{
					//Crescente - Alfabetica Crescente;
					case 1:
						BubbleSortDescricao(pnt_deposito, escolha, i);
						system("cls");
						Imprimir(pnt_deposito, i);
					break;
					//Decrescente - Alfabetica Decrescente;
					case 2:
						BubbleSortDescricao(pnt_deposito, escolha, i);
						system("cls");
						Imprimir(pnt_deposito, i);
					break;
					//Caso não seja escolhido uma opção válida
					default:
						printf("Escolha uma opcao valida no sistema!\n");
				}
			break;
			//Ordernar por Codigo do produto;
			case 2:
				printf("Informe a ordem que deseja\n");
				Ordem();
				scanf("%d",&escolha);
				switch(escolha)
				{
					//Crescente - Alfabetica Crescente;
					case 1:
						BubbleSortCodigo(pnt_deposito, escolha, i);
						system("cls");
						Imprimir(pnt_deposito, i);
					break;
					//Decrescente - Alfabetica Decrescente;
					case 2:
						BubbleSortCodigo(pnt_deposito, escolha, i);
						system("cls");
						Imprimir(pnt_deposito, i);
					break;
					//Caso não seja escolhido uma opção válida
					default:
						printf("Escolha uma opcao valida no sistema!\n");
				}
			break;
			//Ordernar por Quantidade de produtos no estoque;
			case 3:
				printf("Informe a ordem que deseja\n");
				Ordem();
				scanf("%d",&escolha);
				switch(escolha)
				{
					//Crescente - Alfabetica Crescente;
					case 1:
						BubbleSortQuantidade(pnt_deposito, escolha, i);
						system("cls");
						Imprimir(pnt_deposito, i);
					break;
					//Decrescente - Alfabetica Decrescente;
					case 2:
						BubbleSortQuantidade(pnt_deposito, escolha, i);
						system("cls");
						Imprimir(pnt_deposito, i);
					break;
					//Caso não seja escolhido uma opção válida
					default:
						printf("Escolha uma opcao valida no sistema!\n");
				}
			break;
			//Ordernar por Preco do Produto;
			case 4:
				printf("Informe a ordem que deseja\n");
				Ordem();
				scanf("%d",&escolha);
				switch(escolha)
				{
					//Crescente - Alfabetica Crescente;
					case 1:
						BubbleSortPreco(pnt_deposito, escolha, i);
						system("cls");
						Imprimir(pnt_deposito, i);
					break;
					//Decrescente - Alfabetica Decrescente;
					case 2:
						BubbleSortPreco(pnt_deposito, escolha, i);
						system("cls");
						Imprimir(pnt_deposito, i);
					break;
					//Caso não seja escolhido uma opção válida
					default:
						printf("Escolha uma opcao valida no sistema!\n");
				}
			break;
			//Caso não seja escolhido uma opção válida
			default:
				printf("Escolha uma opcao valida no sistema!\n");
		}
	}
	else
	{
		printf("ERRO ao acessar o arquivo contate o administrador do sistema\n");
	}
	
}

void ApagarOsDadosDoSistema(estq  * pnt_deposito)
{
	FILE * arquivo;
	arquivo = fopen("arquivo.txt","w");
	if(arquivo != NULL)
	{
			fprintf(arquivo,"%s","");
			fclose(arquivo);
	}	
	else
	{
		printf("ERRO ao acessar o arquivo contate o administrador do sistema\n");
	}
}