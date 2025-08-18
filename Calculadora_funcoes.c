#include<stdio.h>

double Soma(double a, double b);
double Subtracao(double a, double b);
double Multiplicacao(double a, double b);
double Divisao(double a, double b);
double Potenciacao(double base, int expo);


int main()
{
	int opcao = 0;
	double result = 0.0;
	double a = 0.0;
	double b = 0.0;
	int expo = 0;
	double base = 0.0;
	
	do{
		printf("Escolha uma opcao abaixo\n");
		printf("------------------------\n");
		printf("|1 - Soma               |\n");
		printf("|2 - Subtracao          |\n");
		printf("|3 - Multiplicacao      |\n");
		printf("|4 - Divisao            |\n");
		printf("|5 - Potenciacao        |\n");
		printf("|6 - Sair               |\n");
		printf("------------------------\n");
		
		scanf("%d",&opcao);

		
		switch(opcao)
		{
			case 1:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = a+b;
				printf("O resultado e: %.2lf\n",result);
			break;
			case 2:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = a-b;
				printf("O resultado e: %.2lf\n",result);
			break;
			case 3:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = a*b;
				printf("O resultado e: %.2lf\n",result);
			break;
			case 4:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				if(b ==0)
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
					printf("O resultado e: %.2lf\n",result);
				}
			break;	
		}
		
	}while(opcao != 6);

	printf("Obrigado por usar minha calculadora super poderosa caseira\n");
	return(0);
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

double Potenciacao(double base, int expo)
{
	double result = 1.0;
	for(int i = 0; i<expo; i++)
	{
		result = result * base;
	}
	return (result);
}
