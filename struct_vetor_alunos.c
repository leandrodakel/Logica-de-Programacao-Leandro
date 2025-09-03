#include <stdio.h>
typedef struct Alunos
{
	char nome[50];
	int idade;
	float nota;
	
} Alunos;

int main()
{
	Alunos turma[5];
	int k = 1;
	for(int i = 0; i < 5; i++)
	{
		printf("Informe o nome do aluno 0%d : ",k);
		scanf(" %[^\n]",turma[i].nome);
		printf("Informe a idade do aluno 0%d : ",k);
		scanf("%d",&turma[i].idade);
		printf("Informe a nota do aluno 0%d : ",k);
		scanf("%f",&turma[i].nota);
		k++;
		printf("------------------------\n");
	}
	k = 1;
	for(int i = 0; i < 5; i++)
	{
		printf("\n");
		printf("Nome do aluno 0%d: %s\n",k,turma[i].nome);
		printf("Idade do aluno 0%d: %d\n",k,turma[i].idade);
		printf("Nota do aluno 0%d: %.1f\n",k,turma[i].nota);
		k++;
		printf("------------------------\n\n");
	}
	
	return 0;
}
	
	
	
	
	