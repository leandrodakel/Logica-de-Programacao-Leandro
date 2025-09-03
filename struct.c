#include <stdio.h>

typedef struct Aluno
{
	char nome[50];
	int idade;
	float nota;
} Estudante;

int main()
{
	Estudante a1;
	
	printf("Informe o seu nome: ");
	scanf(" %[^\n]",a1.nome);
	printf("Informe o sua idade: ");
	scanf("%d",&a1.idade);
	printf("Informe o sua nota: ");
	scanf("%f",&a1.nota);
	printf("---------------------\n\n");
	printf("Nome do estudante: %s\n",a1.nome);
	printf("Idade do estudante: %d\n",a1.idade);
	printf("Nota do estudante: %.1f\n",a1.nota);
	
	return 0;

}
	
	

