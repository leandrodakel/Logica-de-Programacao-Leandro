#include <stdio.h>

typedef struct Endereco
{
	char rua[50];
	char bairro[10];
	char cidade[20];
	char complemento[30];
	int numero;
	int cep;
} Endereco;
	
typedef struct Pessoa
{
	char nome[50];
	int idade;
	Endereco end;
} Pessoa;
	
int main()
{
	Pessoa pes;
	
	printf("Informe o seu nome: ");
	scanf(" %[^\n]",pes.nome);
	
	printf("Informe o sua idade: ");
	scanf("%d",&pes.idade);
	
	printf("Informe o seu endereco:\n\n");
	printf("Informe a rua: ");
	scanf(" %[^\n]",pes.end.rua);
	
	printf("Informe o numero: ");
	scanf("%d",&pes.end.numero);
	
	printf("Informe o complemento: ");
	scanf(" %[^\n]",pes.end.complemento);
	
	printf("Informe o bairro: ");
	scanf(" %[^\n]",pes.end.bairro);
	
	printf("Informe o CEP (somente numeros): ");
	scanf("%d",pes.end.cep);
	
	printf("Informe a cidade: ");
	scanf(" %[^\n]",pes.end.cidade);
	
	printf("---------------------\n\n");
	printf("\n\n");
	
	printf("Nome: %s\n",pes.nome);
	printf("Idade: %d\n",pes.idade);
	printf("Rua: %s Numero: \n",pes.end.rua,pes.end.numero);
	printf("Complemento: %s\n",pes.end.complemento);
	printf("Bairro: %s\n",pes.end.bairro);
	printf("CEP: %s\n",pes.end.cep);
	printf("Cidade: %s\n",pes.end.cidade);
	
	
	return 0;
}

	