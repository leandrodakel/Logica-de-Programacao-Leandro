#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

void LerPavra(char * palavra);
int TamanhoPalavra(char * palavra);
void GerarTabuleiro(char *tabuleiro,int tam);
void ImprimirTabuleiro(char *tabuleiro,int tamanho_final);
void Palavra_Vertical(char *tabuleiro, int tam_tabuleiro, char *palavra, int tam_palavra);
void Palavra_Horizontal(char *tabuleiro, int tam_tabuleiro, char *palavra, int tam_palavra);

int main()
{
	char palavra_um[25];
	char palavra_dois[25];
	int t_palavra_um = 0;
	int t_palavra_dois = 0;
	int tamanho_final = 0;
	
	printf("Bem vindo ao encontre a palavra!\n");
	LerPavra(palavra_um);
	LerPavra(palavra_dois);
	t_palavra_um = TamanhoPalavra(palavra_um);
	t_palavra_dois = TamanhoPalavra(palavra_dois);
	
	
	if(t_palavra_um >= t_palavra_dois)
	{
		tamanho_final = t_palavra_um+6;
	}
	else
	{
		tamanho_final = t_palavra_dois+6;
	}
	char tabuleiro[tamanho_final][tamanho_final];
	GerarTabuleiro((char*)tabuleiro,tamanho_final);

	Palavra_Horizontal((char*)tabuleiro,tamanho_final,palavra_um,t_palavra_um);
	Palavra_Vertical((char*)tabuleiro,tamanho_final,palavra_dois,t_palavra_dois);
	ImprimirTabuleiro((char*)tabuleiro,tamanho_final);




	return(0);
}

void LerPavra(char * palavra)
{
	printf("Informe a palavra que sera escondida.\n");
	scanf("%s",palavra);
}

int TamanhoPalavra(char * palavra)
{
	int i = 0;
	int tam = 0;
	while(palavra[i] != '\0')
	{
		tam++;
		i++;
	}
	
	return(tam);
}

void GerarTabuleiro(char *tabuleiro,int tam)
{
	srand(time(NULL));
	for(int i = 0; i < tam; i++)
	{
		for(int k = 0; k < tam; k++)
		{	
			tabuleiro[i*tam+k] = rand() % 26 + 97;
		}
	}
	
}

void ImprimirTabuleiro(char *tabuleiro, int tam)
{
	for(int i = 0; i < tam; i++)
	{
		for(int k = 0; k < tam; k++)
		{
			printf(" %c ",tabuleiro[i*tam+k]);
		}
		printf("\n");
	}
}

void Palavra_Horizontal(char *tabuleiro, int tam_tabuleiro, char *palavra, int tam_palavra)
{
    int linha = rand() % tam_tabuleiro;
    int coluna = rand() % (tam_tabuleiro - tam_palavra + 1);
    
    for(int j = 0; j < tam_palavra; j++)
    {
        tabuleiro[linha * tam_tabuleiro + (coluna + j)] = palavra[j];
    }
}

void Palavra_Vertical(char *tabuleiro, int tam_tabuleiro, char *palavra, int tam_palavra)
{
    int linha = rand() % (tam_tabuleiro - tam_palavra + 1);
    int coluna = rand() % tam_tabuleiro;
    
    for(int j = 0; j < tam_palavra; j++)
    {
        tabuleiro[(linha + j) * tam_tabuleiro + coluna] = palavra[j];
    }
}