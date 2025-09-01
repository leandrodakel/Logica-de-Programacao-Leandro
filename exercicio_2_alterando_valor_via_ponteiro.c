#include <stdio.h>

int main() {
	
	int idade = 20;
	int * p;
	
	p = &idade;
	printf("O valor da idade antes da alteracao: %d\n",*p);
	*p = 25;
	printf("O valor da idade apos a alteracao feita pelo ponteiro: %d\n",*p);
	
	return 0;
}
	