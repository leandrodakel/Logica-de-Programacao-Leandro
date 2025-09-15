#include <stdio.h>

int main()
{
	//ciando a variável ponteiro para o arquivo
	FILE *pont_arq;
	
	int x = 0;
	char nome[20];
	int idade;
	

	//abrindo o arquivo
	pont_arq = fopen("arquivo.txt","r");
	
	if(pont_arq == NULL)
	{
		printf("ERRO! O arquivo nao foi aberto!\n");
	}
	else
	{
		printf("O arquivo foi aberto com sucesso\n");
		
		//lendo com for (quantidade de leitura já estimada)
		//for(int l = 0; l < 21; l++)
		//{
			
				//printf("Escreva seu nome: ");
				//scanf("%s",nome);
				//printf("Escreva sua idade: ");
				//scanf("%d",&idade);
				//fscanf(pont_arq,"%s\n%d\n",nome,&idade);
				//printf("%s\n%d\n", nome,idade);
			
		//}
		
		//lendo com while (quantidade de leitura no arquivo desconhecida)
			while(fscanf(pont_arq,"%s\n%d\n",nome,&idade) != EOF)
			{
				//fscanf(pont_arq,"%s\n%d\n",nome,&idade);
				printf("%s\n%d\n",nome,idade);
			}
		
		
		
		//usando fprintf para armazenar a string no arquivo
		//fprintf(pont_arq,"%s\n%d\n", palavra,idade);
		
		
		//fscanf(pont_arq,"%s\n%d\n", palavra,&idade);
		//printf("%s\n%d\n", palavra,idade);
	}
	
	
	//fechando arquivo
	fclose(pont_arq);
	
	return(0);
}
