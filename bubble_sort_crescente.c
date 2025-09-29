#include <stdio.h>

int main()
{
	int t = 0;
	int temp = 0;
	
	printf("\nDigite um numero para o tamanho do vetor: ");
	scanf("%d",&t);
	int n[t];
	
	
	for(int i = 0; i < t; i++)
	{
		printf("\nDigite numemro para preencher o vetor: ");
		scanf("%d",&n[i]);
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
	
	for(int i = 0; i < t; i++)
	{
		printf("O vetor ordenado eh:\n");
		printf("%d\n",n[i]);
	}
	return (0);
}