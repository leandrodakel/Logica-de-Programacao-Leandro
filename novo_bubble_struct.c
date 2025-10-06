#include <stdio.h>


typedef struct Estoque
{
	char descricao[30];
} Estoque;



int main()
{
	Estoque deposito[10];
	Estoque temp[1];
	int t = 0;
	int tam_um = 0;
	int tam_dois = 0;
	int soma_um = 0;
	int soma_um_total = 0;
	int soma_dois = 0;
	int soma_dois_total = 0;
	int tam_maior = 0;
	int tam_menor = 0;
	int troca = 0;
	int letra_igual = 0;
	int cont = 0;
	
	scanf("%d",&t);
	
	for(int i = 0; i < t; i++)
	{
		scanf(" %s",deposito[i].descricao);
	}
	
	for(int i = 0; i < t; i++)
	{
		printf("Sequencia original: %s\n",deposito[i].descricao);
	}
	
	for(int i = 0; i < t; i++)
	{
		for(int k = 0; k < (t - 1); k++)
		{
			while(deposito[k].descricao[cont] != '\0')
			{
				printf("entrou no while tam1\n");
				tam_um++;
				cont++;
				printf("%s %d\n",deposito[k].descricao,tam_um);
			}
			cont = 0;
			while(deposito[i].descricao[cont] != '\0')
			{
				printf("entrou no while tam2\n");
				tam_dois++;
				cont++;
				printf("%s %d\n",deposito[i].descricao,tam_dois);	
			}
			cont = 0;
			if (tam_um > tam_dois)
			{
				printf("entrou no if maior1\n");
				tam_maior = tam_um;
				tam_menor = tam_dois;
				printf("%s maior que %s\n",deposito[k].descricao,deposito[i].descricao);
			} 
			else if (tam_um < tam_dois)
			{
				printf("entrou no else maior2\n");
				tam_maior = tam_dois;
				tam_menor = tam_um;
				printf("%s maior que %s\n",deposito[i].descricao,deposito[k].descricao);
			}
		
			if(deposito[k].descricao[0] > deposito[i].descricao[0])
			{
				printf("entrou no if troca\n");
				troca = 1;
				printf("troca = 1\n");
				printf("necessario trocar %s com %s\n",deposito[i].descricao,deposito[k].descricao);
			}
					
			if (deposito[k].descricao[0] == deposito[i].descricao[0])
			{	
				printf("entrou no if inicial igual\n");
				for(int j = 0; j < 1; j++)
				{
						for(int w = 0; w < tam_um; w++)
						{
							printf("entrou no for soma1 \n");
							soma_um_total += deposito[k].descricao[w];
						}
						for(int x = 0; x < tam_dois; x++)
						{
							printf("entrou no for soma2 \n");
							soma_dois_total += deposito[i].descricao[x];
						}
				}	
				printf("Soma um = %d\n",soma_um_total);
				printf("Soma dois = %d\n",soma_dois_total);
				printf("Valor de k = %d\n",k);
				printf("Valor de i = %d\n",i);					
				cont = 1;
				while(cont < tam_maior)
				{
					printf("entrando no while de validacao de troca\n");
				//validando troca de vetores
					if(deposito[k].descricao[cont] > deposito[i].descricao[cont])
					{
							printf("entrou no for letra maior\n");
							troca = 1;
							printf("troca = 1\n");
							printf("necessario trocar %s com %s\n",deposito[k].descricao,deposito[i].descricao);
							break;				
					}
					//averiguando a não-troca de vetores
					if(deposito[k].descricao[cont] < deposito[i].descricao[cont])
					{
							printf("entrou no for letra menor\n");
							break;				
					}
					//validando vetores de 
					if(deposito[k].descricao[tam_menor-1] == deposito[i].descricao[tam_menor-1] && letra_igual == (tam_menor))
					{
							printf("entrou no if paulonho\n\n");
							if(soma_dois_total > soma_um_total)
							{
								troca = 1;
								printf("troca = 1\n");
								printf("necessario trocar %s com %s\n",deposito[k].descricao,deposito[i].descricao);
							}
					}
					letra_igual++;
					cont++;
				}
				
			}
				
			//organizando vetores alfabeticamente
			if(troca == 1)
			{
				printf("entrou no if bubble\n");
			
				temp[0] = deposito[i];
				deposito[i] = deposito[k];
				deposito[k] = temp[0];
				printf(" %s foi trocado com %s\n",deposito[i].descricao,deposito[k].descricao);
			}
		
		tam_um = 0;
		tam_dois = 0;
		soma_um = 0;
		soma_um_total = 0;
		soma_dois_total = 0;
		soma_dois = 0;
		tam_maior = 0;
		tam_menor = 0;
		troca = 0;
		letra_igual = 0;
		cont = 0;
		}
		
	}
	
	for(int i = 0; i < t; i++)
	{
		printf("Sequencia ordenada: %s\n",deposito[i].descricao);
	}
	
	
	return 0;
}