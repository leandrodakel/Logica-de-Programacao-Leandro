#include <stdio.h>
#include <stdlib.h>

int main()
{
	void * vetor;
	int n = 0;
	printf("Digite o numero de elementos\n");
	scanf("%d",&n);
	vetor = (int *)malloc(n * sizeof(int));
	if(vetor == NULL)
	{
		printf("Erro ao alocar memoria\n");
		return(1);
	}
	for(int i = 0; i < n; i++)
	{
		vetor[i] = i * 2;
		printf("vetor[%d] = %d\n",i,vetor[i]);
	}
	free(vetor);
	vetor = NULL;
	return(0);
}
