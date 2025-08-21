#include<stdio.h>

int FatorialDuplo(int a1);

int main()
{
	int a1 = 0;
	int result1 = 0;
		
	printf("Digite o numero inteiro: ");
	scanf("%d", &a1);
	
	if(a1 < 0)
	{
		printf("Somente e possivel calcular fatorial com numeros positivos\n");
	}
	else
	{
		result1 = FatorialDuplo(a1);
		printf("O resultado e: %d", result1);
	}	
	
	return 0;
}

int FatorialDuplo(int a1)
{
	int result1 = 1;
	if(a1%2 == 0)
	{
		for(int i = 2; i <= a1; i=i+2)
		{
			result1 = result1 * i;
		}
	}
	else
	{
		for(int i = 1; i <= a1; i=i+2)
		{
			result1 = result1 * i;
		}
	}
	return (result1);
}