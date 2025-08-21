#include<stdio.h>

int Mdc(int a1, int b1);

int main()
{
	int a1 = 0;
	int b1 = 0;
	int result1 = 0;
	
	printf("Digite o numero maior: \n");
	printf("Digite o numero menor: \n");
	
	scanf("%d %d", &a1, &b1);
	
	result1 = Mdc(a1,b1);
	
	printf("O maximo divisor comum e: %d",result1);
	
	return(0);
}

int Mdc(int a1, int b1)
{
	int result = 1;
	while(b1 != 0)
	{
		result = b1;
		b1 = a1 % b1;
		a1 = result;
	}
	return(a1);
}