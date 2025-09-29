#include <stdio.h>

typedef struct Estoque
{
	char descricao[15];
	
} Estoque;

int main()
{
	Estoque produtos[1000];
	Estoque produtos2;
	int t = 0;
	int j = 0;
	int buff = 0;
	
	
	printf("\nDigite um numero de produtos: ");
	scanf("%d",&t);
	
	
	
	for(int i = 0; i < t; i++)
	{
		printf("\nDigite a descrição do produto:\n");
		scanf("%s",produtos[i].descricao);
	}
	
	printf("\nOs produtos sao:\n");
	for(int i = 0; i < t; i++)
	{
		printf("%s\n",produtos[i].descricao);
	}
	
	
	for(int i = 0; i < t; i++)
	{
		for(int k = 0; k < t; k++)
		{	
			if(produtos[i].descricao[j] < produtos[k].descricao[j]  && buff == 0)
			{
				j = 0;
				while(produtos[i].descricao[j] != '\0' && produtos[k].descricao[j] != '\0')
				{
					produtos2.descricao[j] = produtos[i].descricao[j];
					produtos[i].descricao[j] = produtos[k].descricao[j];
					produtos[k].descricao[j] = produtos2.descricao[j];
					buff = 1;
					j++;
				}
				produtos2.descricao[j] = '\0';
				produtos[i].descricao[j] = '\0';
				produtos[k].descricao[j] = '\0';
								
			}
			buff = 0;
		}
		
	}	
	
	
	printf("\n\n Os produtos ordenados sao:\n");
	for(int i = 0; i < t; i++)
	{
		printf("%s\n",produtos[i].descricao);
	}
	return (0);
}