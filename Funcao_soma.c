#include <stdio.h>

int Soma(int a, int b);

int main()
{
	int a = 0;
	int b = 0;
	int resp = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	resp = Soma(a,b);
	
	printf("O valor da soma eh %d", resp);
	
	return 0;
}

int Soma(int a, int b)
{
	int resp = 0;
	resp = a + b;
	return(resp);
}


