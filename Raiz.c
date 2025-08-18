#include<stdio.h>


int main()
{
	double num = 0.0;
	double x = 0.0;
	double novo_x = 0.0;
	
	printf("Digite um numero positivo e real: \n");
	scanf("%lf", &num);
	
	x = num;
	
	for(int i=0;i<1000;i++)
	{
		novo_x = (0.5) * (x + (num/x));
		x = novo_x;
	}
	
	printf("A raiz quadrada de %.0lf eh: %.2lf", num, x);
	
	return 0;
}