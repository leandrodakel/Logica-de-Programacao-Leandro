#include<stdio.h>

double Soma(double a, double b);
double Subtracao(double a, double b);
double Multiplicacao(double a, double b);
double Divisao(double a, double b);
double Potenciacao(double base, int expo);
int RaizQuadrada (int a1);

int main()
{
	int opcao = 12;
	double result = 0.0;
	int result1 = 0;
	double a = 0.0;
	double b = 0.0;
	int a1 = 0;
	int b1 = 0;
	int expo = 0;
	int base = 0;
	double delta = 0.0;
	double x1 = 0.0;
	double x2 = 0.0;
	
	
	do{
		printf("--------------------------------------------------------\n");
		printf("|Bem-vindo a Calculadora 1.0...........................|\n");
		printf("|Escolha uma opcao.....................................|\n");
		printf("--------------------------------------------------------\n");
		printf("|0 - MDC...............................................|\n");
		printf("|1 - MMC...............................................|\n");
		printf("|2 - Soma..............................................|\n");
		printf("|3 - Sair..............................................|\n");
		printf("|4 - Divisao...........................................|\n");
		printf("|5 - Subtracao.........................................|\n");
		printf("|6 - Potenciacao.......................................|\n");
		printf("|7 - Multiplicacao.....................................|\n");
		printf("|8 - Raiz Quadrada.....................................|\n");
		printf("|9 - Fatorial Duplo (N!!)..............................|\n");
		printf("|10 - Fatorial Simples (N!)............................|\n");
		printf("|11 - Equacao do Segundo Grau..........................|\n");
		printf("--------------------------------------------------------\n");
		
		scanf("%d",&opcao);

		
		switch(opcao)
		{
			case 0;
				printf("Informe o numero maior:\n");
				scanf("%d",&a);
				printf("Informe o numero menor:\n");
				scanf("%d",&b);
				if(a < b)
				{
					printf("Nao e possivel caldular o MDC realizado a divisao do numero menor pelo maior\n");
				}
				else
				{
					result1 = Mdc(a1,b1);
					printf("O resultado e: %d\n",result1);
				}
			case 1:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%d",&a1);
				printf("Informe outro numero\n");
				scanf("%d",&b1);
				result1 = Mmc(a1,b1);
				printf("O resultado e: %d\n",result1);
			break;
			case 2:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = Soma(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;
			case 3:
			break;
			case 4:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				if(b == 0)
				{
					printf("Nao e possivel realizar divisao por 0\n");
				}
				else
				{
					result = Divisao(a,b);
					printf("O resultado e: %.2lf\n",result);
				}
			break;
			case 5:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = Subtracao(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;	
			case 6:
				printf("Informe o numero da base:\n");
				scanf("%lf",&base);
				printf("Informe o numero do expoente\n");
				scanf("%d",&expo);
				if(base==0 && expo==0)
				{
					printf("Calculo indeterminado!\a\n");
				}
				else
				{
					result = Potenciacao(base,expo);
					printf("O resultado e: %d\n",result);
				}
			break;
			case 7:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = Multiplicacao(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;
			case 8:
				printf("Informe o numeros que deseja realizar a operacao:\n");
				scanf("%d",&a1);
				result1 = RaizQuadrada(a1);
				printf("O resultado e: %d\n",result1);
			break;
			case 9:
				printf("Informe o numeros que deseja realizar a operacao:\n");
				scanf("%d",&a1);
				result1 = 
			
			break;
			case 10:
			
			break;
			case 11:
			
			break;
		}
		
	}while(opcao != 3);

	printf("Obrigado por usar minha calculadora super poderosa caseira\n");
	return(0);
}

int Mdc(int a1, int b1)
{
	int result = 1;
	while(b != 0)
	{
		result = b1;
		b1 = a1 % b1;
		a1 = result;
	}
	return(a1);
}

int Mmc(int a1, int b1)
{
	int result1 = 1;
	int result2
	while(b != 0)
	{
		result1 = b1;
		b1 = a1 % b1;
	}
	result2 = (a1 * b1) / result1;
	return (result2);
}

double Soma(double a, double b)
{
	double result = 0.0;
	result = a + b;
	return (result);
}

double Subtracao(double a, double b)
{
	double result = 0.0;
	result = a - b;
	return (result);
}

double Multiplicacao(double a, double b)
{
	double result = 0.0;
	result = a * b;
	return (result);
}

double Divisao(double a, double b)
{
	double result = 0.0;
	result = a / b;
	return (result);
}

int Potenciacao(int base, int expo)
{
	int result = 1.0;
	for(int i = 0; i<expo; i++)
	{
		result = result * base;
	}
	return (result);
}

double RaizQuadrada(int a1)
{
	result1 = 0;
	double x = 0;
	double novo_x = 0;
	for(int i = 0; i < 100; i++)
	{
		novo_x = (0.5) * (x + (a1/x));
		x = novo_x;
	}
	x = result1;
	return (result1);
}


