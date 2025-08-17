#include<stdio.h>
int main()
{
	float num_float = 0.0;
	int n100 = 0;
	int n50 = 0;
	int n20 = 0;
	int n10 = 0;
	int n5 = 0;
	int n2 = 0;
	int m1 = 0;
	int m050 = 0;
	int m025 = 0;
	int m010 = 0;
	int m005 = 0;
	int m001 = 0;
	int num_inteiro_notas = 0;
	
	
	
	scanf("%f",&num_float);
	
		n100 = (int)num_float / 100;
		num_inteiro_notas = (int)num_float % 100;
	
		n50 = num_inteiro_notas / 50;
		num_inteiro_notas %= 50;
	
		n20 = num_inteiro_notas / 20;
		num_inteiro_notas %= 20;

		n10 = num_inteiro_notas / 10;
		num_inteiro_notas %= 10;
	
		n5 = num_inteiro_notas / 5;
		num_inteiro_notas %= 5;

		n2 = num_inteiro_notas / 2;
		num_inteiro_notas %= 2;

		m1 = num_inteiro_notas;
	
	float num_float_moedas = 0.0;
	int num_inteiro_moedas = 0;
	
	num_float_moedas = num_float - (int)num_float;
	num_inteiro_moedas = num_float_moedas * 100;

		
		m050 = num_inteiro_moedas / 50;
		num_inteiro_moedas = num_inteiro_moedas % 50;
	
		m025 = num_inteiro_moedas / 25;
		num_inteiro_moedas = num_inteiro_moedas % 25;
	
		m010 = num_inteiro_moedas / 10;
		num_inteiro_moedas = num_inteiro_moedas % 10;
	
		m005 = num_inteiro_moedas / 5;
		num_inteiro_moedas = num_inteiro_moedas % 5;
	
   		m001 = num_inteiro_moedas;
	
	
	
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",n100);
	printf("%d nota(s) de R$ 50.00\n",n50);	
	printf("%d nota(s) de R$ 20.00\n",n20);
	printf("%d nota(s) de R$ 10.00\n",n10);
	printf("%d nota(s) de R$ 5.00\n",n5);
	printf("%d nota(s) de R$ 2.00\n",n2);
			
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",m1);
	printf("%d moeda(s) de R$ 0.50\n",m050);
	printf("%d moeda(s) de R$ 0.25\n",m025);
	printf("%d moeda(s) de R$ 0.10\n",m010);
	printf("%d moeda(s) de R$ 0.05\n",m005);
	printf("%d moeda(s) de R$ 0.01\n",m001);

return(0);
}