#include <stdio.h>

//void CalculaMaiorVetor(char *pont_nome_um,char *pont_nome_dois);

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
	char var;
	int troca = 0;
	
	printf("\nDigite um nome: ");
	scanf(" %s",nome_um);
	
	printf("\nDigite outro nome: ");
	scanf(" %s",nome_dois);
	
	printf("\nA posicao original dos nomes eh:\n");
	printf(" %s\n",nome_um);
	printf(" %s\n\n",nome_dois);
	
	//definindo tamanho dos vetores
	var = 'k';
	while(var != '\0')
	{
		var = nome_um[i];
		if(var != '\0')
		{
			tam_um++;
		}
		i++;
	}
	
	var = 'k';
	i = 0;
	while(var != '\0')
	{
		var = nome_dois[i];
		if(var != '\0')
		{
			tam_dois++;
		}
		i++;
	}
	
	printf("%d %d\n",tam_um,tam_dois);
	
	
	//definindo a soma dos vetores
	if(tam_um == tam_dois)
	{
		for(int i = 0; i < tam_um; i++)
		{
			soma_um += nome_um[i];
		}
	}
	
	if(tam_um == tam_dois)
	{
		for(int i = 0; i < tam_dois; i++)
		{
			soma_dois += nome_dois[i];
		}
	}
	
	if(tam_um < tam_dois)
	{
		for(int i = 0; i < tam_um; i++)
		{
			soma_um += nome_um[i];
		}
		for(int i = 0; i < tam_um; i++)
		{
			soma_dois += nome_dois[i];
		}
		
		
		
	}
	
	if(tam_um > tam_dois)
	{
		for(int i = 0; i < tam_dois; i++)
		{
			soma_um += nome_um[i];
		}
		for(int i = 0; i < tam_dois; i++)
		{
			soma_dois += nome_dois[i];
		}
		
		
	}
	
	printf("%d %d\n",soma_um,soma_dois);
	
	if(soma_um > soma_dois)
	{
		printf("entrou");
		troca = 1;
	}
	
	//organizando vetores alfabeticamente
	if(troca == 1);
	{
		if(tam_um < tam_dois)
		{
			for(int i = 0; i < tam_um; i++)
			{
				for(int k = 0; k <= (tam_um - 2); k++)
				{
					if(soma_um < soma_dois)
					{
						for(int i = 0; i < tam_um; i++)
						{
							temp[i] = nome_um[i];
							printf("temp[i]");
							nome_um[i] = nome_dois[i];
							nome_dois[i] = temp[i];
						}
					}	
				}
			}	
		}
		if(tam_um > tam_dois)
		{
			printf("entrou no bubble");
			for(int i = 0; i < tam_dois; i++)
			{
				for(int k = 0; k <= (tam_dois - 2); k++)
				{
					if(soma_um > soma_dois)
					{
						for(int i = 0; i < tam_dois; i++)
						{
							temp[i] = nome_um[i];
							printf("temp[i]");
							nome_um[i] = nome_dois[i];
							nome_dois[i] = temp[i];
						}
					}	
				}
			}
		}
	}
	
	
	
	
	printf("\nA posicao ordenada dos nomes eh:\n");
	printf(" %s\n",nome_um);
	printf(" %s\n\n",nome_dois);
	
	return 0;
}

	
	//CalculaMaiorVetor(nome_um,nome_dois);
	
	


/*void CalculaMaiorVetor(char *pont_nome_um,char *pont_nome_dois)

	int i = 0;
	char var = 'k';
	int tam_um = 0;
	int tam_dois = 0;
	int soma_um;
	int soma_dois;
	
	//definindo o tamanho dos vetores
	while(var != '\0')
	{
		var = *pont_nome_um[i];
		if(var != '\0')
		{
			tam_um++;
		}
		i++;
	}
	var = 'k';
	while(var != '\0')
	{
		var = *pont_nome_dois[i];
		if(var != '\0')
		{
			tam_dois++;
		}
		i++;
	}
	printf("%d %d",tam_um,tam_dois);
**/