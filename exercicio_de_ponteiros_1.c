#include <stdio.h>

int main() {
	
	int numero = 50;
	int * ptr;
	ptr = &numero;
	
	printf("Valor da variavel 'numero'-- sem usar o ponteiro = %d\n",numero);
	printf("Endereco de memoria de 'numero'-- usando & = %x\n",&numero);
	printf("Valor armazenado no ponteiro 'ptr'-- que deve ser o endereco de 'numero' = %x\n",ptr);
	printf("Conteudo apontado por 'ptr'-- valor da variavel acessado via ponteiro = %d\n",*ptr);
	
	return 0;
}