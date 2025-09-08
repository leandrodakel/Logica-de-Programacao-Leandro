#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void LerPalavras(char * a, char * b);
int TamanhoPalavras(char * a);
void PalavraVertical(char * a);
void PalavraHorizontal(char * a);

int main()
{

    char palavra1[25];
    char palavra2[25];
    int tam1 = 0;
    int tam2 = 0;
    int tam_final = 0;
    char * palavra;
    int var;
    char tabuleiro[100][100];
    
    LerPalavras(palavra1,palavra2);
    
    tam1 = TamanhoPalavras(palavra1);
    tam2 = TamanhoPalavras(palavra2);
    
    if(tam1 >= tam2) 
    {
        tam_final = tam1 + 6;
    }
    else
    {
        tam_final = tam2 + 6;
    }
    
    tabuleiro[tam_final][tam_final];
    
    srand(time NULL);
	for(int l = 0; l < 10; l++)
	{
		for(int c = 0; c < 10; c++)
		{
			var = (rand() % 26) + 97;
			tabuleiro[l][c] = (char)var;
		}
	}
    
   for(int l = 0; l < 10; l++)
	{
		printf("|");
		for(int c = 0; c < 10; c++)
		{
			printf(" %c", tabuleiro[l][c]);
		}
		printf("|\n");
	}
    
    Palavra_Horizontal((char*)tabuleiro,tamanho_final,palavra_um,t_palavra_um);
    
	Palavra_Vertical((char*)tabuleiro,tamanho_final,palavra_dois,t_palavra_dois);
	
	//ImprimirTabuleiro((char*)tabuleiro,tamanho_final);
    for(int l = 0; l < 10; l++)
	{
		printf("|");
		for(int c = 0; c < 10; c++)
		{
			printf(" %c", tabuleiro[l][c]);
		}
		printf("|\n");
	}
	
	
    return 0;
}

void LerPalavras(char * a, char * b)
{
    printf("Insira a palavra que sera encondida:\n");
    scanf("%s",a);
    printf("Insira a outra palavra que sera encondida:\n");
    scanf("%s",b);
}

int TamanhoPalavras(char * a)
{
    int i = 0;
    int tam = 0;
     while(a[i] != '\0')
    {
        tam++;
        i++;
    }
    return(tam);
}

void PalavraVertical(char * a)
{
    int sorteiaLinha = range()%2;
    int sorteiaColuna = range()%tam2;
    int j = 0;
    int c = 0;
    
    for(int l = 0; l < tam_tabuleiro; l++)
	{
		if(c < tam2 && j < tam2)
		{
			int tabuleiro[l][c] = palavra[j];
			j++;
			c++;
		}
		c = 0;
	}
}

void PalavraHorizontal(char * a)
{
    int sorteiaLinha = range()%2;
    int sorteiaColuna = range()%tam1;
    int j = 0;
    
	for(int l = sorteiaLinha; l < tam1; l++)
	{
		for(int c = sorteiaColuna; j < tam1 ; c++)
		{
			int tabuleiro[l][c] = a[j];
			j++;
		}
		break;
	}
    
}

