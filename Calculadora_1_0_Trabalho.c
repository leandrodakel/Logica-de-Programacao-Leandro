#include<stdio.h>

int Mdc(int a1, int b1);
int Mmc(int a1, int b1);
double Soma(double a, double b);
double Subtracao(double a, double b);
double Multiplicacao(double a, double b);
double Divisao(double a, double b);
double Potenciacao(double base, int expo);
double RaizQuadrada(int a1);
int FatorialDuplo(int a1);
int FatorialSimples(int a1);
void EquacaoSegundoGrau(double a, double b, double c);

int main()
{
	int opcao = 0;
	double result = 0.0;
	int result1 = 0;
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	int a1 = 0;
	int b1 = 0;
	int expo = 0;
	double base = 0.0;
	                                                                                                       
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
			case 0:
				printf("Informe o numero maior:\n");
				scanf("%d",&a1);
				printf("Informe o numero menor:\n");
				scanf("%d",&b1);
				if(a1 < b1)
				{
					printf("Nao e possivel caldular o MDC realizado a divisao do numero menor pelo maior\n");
				}
				else
				{
					result1 = Mdc(a1,b1);
					printf("O resultado e: %d\n",result1);
				}
			break;
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
				printf("O resultado e: %.5lf\n",result);
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
					printf("O resultado e: %.5lf\n",result);
				}
			break;
			case 5:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = Subtracao(a,b);
				printf("O resultado e: %.5lf\n",result);
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
					printf("O resultado e: %.5lf\n",result);
				}
			break;
			case 7:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = Multiplicacao(a,b);
				printf("O resultado e: %.5lf\n",result);
			break;
			case 8:
				printf("Informe o numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				if(a < 0)
				{
					printf("Impossivel calcular\n");
				}
				else
				{
					result = RaizQuadrada(a);
					printf("O resultado e: %.5lf\n",result);
		
				}
			break;
			case 9:
				printf("Informe o numero inteiro e positivo:\n");
				scanf("%d",&a1);
				
				if(a1 < 0)
				{
					printf("Somente e possivel calcular fatorial com numeros positivos e inteiros\n");
				}
				else if(a1 == 0)
				{
					printf("Por se tratar de um produto vazio, 0!! e igual a 1\n");
				}
				else if(a1 > 0)
				{
					result1 = FatorialDuplo(a1);
					printf("O resultado e: %d\n", result1);
				}				
			break;
			case 10:
				printf("Informe o numero inteiro e positivo:\n");
				scanf("%d",&a1);
				if(a1 < 0)
				{
					printf("Somente e possivel calcular fatorial com numeros positivos e inteiros\n");
				}
				else if (a1 == 0)
				{
					printf("Por se tratar de um produto vazio, 0! e igual a 1\n");
				}
				else if (a1 > 0)
				{
					result1 = FatorialSimples(a1);
					printf("O resultado e: %d\n", result1);
				}	
			break;
			case 11:
				printf("Informe o numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				printf("Informe outro numero\n");
				scanf("%lf",&c);
				EquacaoSegundoGrau(a,b,c);
			break;
		}
		
	}while(opcao != 3);

	printf("Obrigado por usar Calculadora 1.0\n");
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

int Mmc(int a1, int b1)
{
	int result1 = 1;
	int result2 = 0;
	int temp_a1 = 0;
	int temp_b1 = 0;
	temp_a1 = a1;
	temp_b1 = b1;
	while(temp_b1 != 0)
	{
		result1 = temp_b1;
		temp_b1 = temp_a1 % temp_b1;
		temp_a1 = result1;
	}
	result2 = (a1 * b1) / temp_a1;
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

double Potenciacao(double base, int expo)
{
	double result = 1.0;
	for(int i = 0; i < expo; i++)
	{
		result = result * base;
	}
	return (result);
}

double RaizQuadrada(int a1)
{
	double result1 = 0.0;
	double x = 0.0;
	double novo_x = 0.0;
	x = a1;
	for(int i = 0; i < 100; i++)
	{
		novo_x = (0.5) * (x + (a1/x));
		x = novo_x;
	}
	result1 = x;
	return (result1);
}

int FatorialDuplo(int a1)
{
	int result1 = 1;
	if(a1%2 == 0)
	{
		for(int i = 2; i <= a1; i=i+2)
		{
			result1 = result1 * i;
		}
	}
	else
	{
		for(int i = 1; i <= a1; i=i+2)
		{
			result1 = result1 * i;
		}
	}
	return (result1);
}

int FatorialSimples(int a1)
{
	
	int result1 = 1;
	for(int i = 1; i <= a1; i++)
	{
		result1 = result1 * i;
	}
	return (result1);
}

void EquacaoSegundoGrau(double a, double b, double c)
{
	double delta = 0.0;
	double x1 = 0.0;
	double x2 = 0.0;
	
	delta = Potenciacao(b,2) - (4 * a * c);
    
	if(a == 0)
	{
		printf("Impossivel realizar divisao por 0\n");
	}
	else if(delta < 0)
	{
		printf("Impossivel raiz quadrada de numeros negativos\n");
	}
	else if (a != 0 && delta >= 0)
	{
		x1 = ((-1 * b) + RaizQuadrada(delta)) / (2.0 * a);
		x2 = ((-1 * b) - RaizQuadrada(delta)) / (2.0 * a);
		printf("Os resultados sao %.5lf e %.5lf\n", x1, x2);
	}
}