#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
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
	
	
	
	
	scanf("%d.%d",&num1,&num2);
	
		n100 = num1 / 100;
		num1 %= 100;
	
		n50 = num1 / 50;
		num1 %= 50;
	
		n20 = num1 / 20;
		num1 %= 20;

		n10 = num1 / 10;
		num1 %= 10;
	
		n5 = num1 / 5;
		num1 %= 5;

		n2 = num1 / 2;
		num1 %= 2;

		m1 = num1;
		
		m050 = num2 / 50;
		num2 %= 50;
	
		m025 = num2 / 25;
		num2 %= 25;
	
		m010 = num2 / 10;
		num2 %= 10;
	
		m005 = num2 / 5;
		num2 %= 5;
	
   		m001 = num2;
	
	
	
	
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