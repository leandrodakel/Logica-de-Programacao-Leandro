#include <stdio.h>

int main()
{
	int t = 0;
	int i = 0;
	char nome_um[20];
	char nome_dois[20];
	int tam_um = 0;
	int tam_dois = 0;
	int soma_um = 0;
	int soma_dois = 0;
	char temp[20];
	int tam_maior = 0;
	int tam_menor = 0;
	int troca = 0;
	int letra_igual = 0;
	
	printf("Quantos pares de nomes deseja comparar?\n");
	scanf("%d",&t);
	
	for(int i = 0; i < t; i++)
	{
		printf("\nDigite um nome: ");
		scanf(" %s",nome_um);
		
		printf("\nDigite outro nome: ");
		scanf(" %s",nome_dois);
		
		printf("\nA posicao original dos nomes eh:\n");
		printf("%s\n",nome_um);
		printf("%s\n\n",nome_dois);
		
		//definindo tamanho dos vetores
		while(nome_um[i] != '\0')
		{
			tam_um++;
			i++;
		}
		i = 0;
		while(nome_dois[i] != '\0')
		{
			tam_dois++;
			i++;
		}
		
		//definindo o maior e menor vetor	
		if (tam_um > tam_dois)
		{
			tam_maior = tam_um;
			tam_menor = tam_dois;
		} 
		else 
		{
			tam_maior = tam_dois;
			tam_menor = tam_um;
		}
		
		//detectando possivel ordenação
		if(nome_um[0] > nome_dois[0])
		{
			troca = 1;
		}
			
		if(nome_um[0] == nome_dois[0])
		{	
			for(int i = 0; i < tam_um; i++)
			{
				soma_um += nome_um[i];
				soma_dois += nome_dois[i];
			}
					
			i = 0;
			while(i < tam_menor)
			{
				//validando troca de vetores
				if(nome_um[i] > nome_dois[i])
				{
					soma_um += nome_um[i];
					soma_dois += nome_dois[i];
					troca = 1;
					break;				
				}
				//averiguando a não-troca de vetores
				if(nome_um[i] < nome_dois[i])
				{
					soma_um += nome_um[i];
					soma_dois += nome_dois[i];
					break;				
				}
				//validando vetores de 
				if(nome_um[tam_menor-1] == nome_dois[tam_menor-1] && letra_igual == (tam_menor-1))
				{
					if(soma_um > soma_dois)
					{
						troca = 1;
					}
				}
				letra_igual++;
				i++;
			}
		}
		
		//organizando vetores alfabeticamente
		if(troca == 1)
		{
			printf("entrou no bubble\n");
			for(int i = 0; i <= tam_maior; i++)
			{
				printf("entrou no bubble 1\n");
				temp[i] = nome_um[i];
				printf("%c",temp[i]);
				nome_um[i] = nome_dois[i];
				nome_dois[i] = temp[i];
			}		
			printf("\nA posicao ordenada dos nomes eh:\n");
			printf(" %s\n",nome_um);
			printf(" %s\n\n",nome_dois);
		}
		else
		{
			printf("\nA posicao ordenada dos nomes eh:\n");
			printf("%s\n",nome_um);
			printf("%s\n\n",nome_dois);
		}
		i = 0;
		tam_um = 0;
		tam_dois = 0;
		soma_um = 0;
		soma_dois = 0;
		char temp[] = {};
		tam_maior = 0;
		tam_menor = 0;
		troca = 0;
		letra_igual = 0;
	}
	return 0;
}