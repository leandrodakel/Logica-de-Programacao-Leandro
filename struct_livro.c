#include <stdio.h>

typedef struct Livro
{
	char titulo[50];
	char autor[30];
	float preco;
} Livro;

int main()
{
	Livro a1;
	
	printf("Informe o titulo do livro: ");
	scanf(" %50[^\n]s",a1.titulo);
	printf("Informe o nome do autor: ");
	scanf(" %30[^\n]s",a1.autor);
	printf("Informe o preco: ");
	scanf("%f",&a1.preco);
	
	printf("Titulo do livro: %s\n",a1.titulo);
	printf("Autor do livro: %s\n",a1.autor);
	printf("Preco do livro: %.2f\n",a1.preco);
	
	return(0);
}