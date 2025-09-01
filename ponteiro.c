#include <stdio.h>

int main()
{
	
	int vet[5];
	int * vet_ptr; 
	vet_ptr = &vet
	// para gravar enderecos de memoria em vetores
	
	
	
	
	int * ptr;
	int valor = 10;
	
	ptr = &valor; // salvei no meu ponteiro o endereco de memoria em que minha variavel descansa
	printf("Endereco da variavel valor = %x\n",&valor); // imprimi o endereco de memoria de minha variavel
	printf("Endereco salvo em meu ponteiro = %x\n",ptr); //* o meu ponteiro tem em si o endereco da variavel,
														 //** como visto na linha 7
	printf("Endereco do meu ponteiro = %p\n",&ptr); //* este e o endereco do proprio ponteiro,
													//** e nao da variavel... este e obtido pelo macro %p
	printf("Valor da minha variavel = %d\n",*ptr); //* o asterisco indica o conteudo da variavel
												   //**	que o ponteiro aponta e até manipula
	*ptr = 5; // posso alterar desta forma o valor da variavel que o ponteiro aponta
	printf("Valor da minha variavel = %d\n",*ptr); // imprimi a alteracao na variavel via ponteiro
	
	
	return 0;
}
