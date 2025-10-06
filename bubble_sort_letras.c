#include <stdio.h>

int main()
{
	int t = 0;
	char temp = 0;
	
	printf("\nDigite um numero para o tamanho do vetor: ");
	scanf("%d",&t);
	char n[t];
	
	
	for(int i = 0; i < t; i++)
	{
		printf("\nDigite uma letra para preencher o vetor: ");
		scanf(" %c",&n[i]);
	}
	
	printf("\nO vetor original eh:\n");
	for(int i = 0; i < t; i++)
	{
		printf("%c ",n[i]);
	}
	
	
	for(int i = 0; i < t; i++)
	{
		for(int k = 0; k <= (t - 2); k++)
		{
			if(n[i] > n[k])
			{
				temp = n[i];
				n[i] = n[k];
				n[k] = temp;
			}	
		}
	}	
	
	printf("\n\nO vetor ordenado eh:\n");
	for(int i = 0; i < t; i++)
	{
		printf("%c ",n[i]);
	}
	return (0);
}