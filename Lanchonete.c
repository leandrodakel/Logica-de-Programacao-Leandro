#include<stdio.h>

int main()

{
    double PROD1 = 15.00;
    double PROD2 = 10.00;
    double PROD3 = 9.00;
    double PROD4 = 5.00;
	char nome[20];
	int cod, quant = 0;
	double prod[5];
	
	double total = 0.0;
	int menu = 0;

	printf("      \n");
	printf("Informe seu nome: ");
	scanf("%s", nome);
	
	printf("      \n");
	printf("     Bem-vindo, %s !\n\n", nome);
	printf("     ---------------------------------------------\n");
	printf("     |          LANCHONETE DO SENAI              |\n");
	printf("     |                                           |\n");
	printf("     |  CODIGO   PRODUTO           PRECO R$      |\n");
	printf("     |  1        X-Salada          15.00         |\n");
	printf("     |  2        X-Burger          10.00         |\n");
	printf("     |  3        Suco Laranja      9.00          |\n");
	printf("     |  4        Refri Lata        5.00          |\n");
	printf("     ---------------------------------------------\n\n");
	
	prod[1] = 0.0;
	prod[2] = 0.0;
	prod[3] = 0.0;
	prod[4] = 0.0;
	
	do{
	        printf("    ________________________________\n");
			printf("     Digite o codigo do produto:  ");
	        scanf("%d",&cod);
			printf("    \n");
			printf("      \n");
	        
		switch(cod)
		{
			case 1:
			printf("      \n");
			printf("    ________________________________\n");
			printf("    | X-Salada ---------- R$ 15.00 |\n");
			printf(" \n");
			
			break;
			
			case 2:
			printf("      \n");
			printf("    ________________________________\n");
			printf("    | X-Burguer --------- R$ 10.00 |\n");
			printf("    \n");
			
			break;
			
			case 3:
			printf("      \n");
			printf("    ________________________________\n");
			printf("    | Suco Laranja ------ R$ 9.00  |\n");
			printf("    \n");
			
			break;
			
			case 4:
			printf("      \n");
			printf("    ________________________________\n");
			printf("    | Refri Lata -------- R$ 5.00  |\n");
			printf("   \n");
			
			break;
			
			default:
			printf("      \n");
			printf("    _____________________\n");
			printf("    | Código inválido!  |\n");
			printf("   \n");
			
		}
	
		
		if(cod == 1)
		{
			printf("    _________________________\n");
		    printf("     Digite a quantidade:  ");
	    	scanf("%d",&quant);
			printf("    _________________________\n");
			prod[1] = PROD1 * quant;
			
			printf("     %d X-Salada ---------- R$ %.2lf\n\n", quant, prod[1]);
			printf("      \n");
		}
			
		else if (cod == 2)
		{
			printf("    _________________________\n");
			printf("     Digite a quantidade:  ");
	    	scanf("%d",&quant);
			printf("    _________________________\n");
			prod[2] = PROD2 * quant;
			
			printf("     %d X-Burguer --------- R$ %.2lf\n\n", quant, prod[2]);
			printf("      \n");
		}
			
		else if (cod == 3)
		{
			printf("    _________________________\n");
			printf("     Digite a quantidade:  ");
	    	scanf("%d",&quant);
			printf("    _________________________\n");
			prod[3] = PROD3 * quant;
			
			printf("     %d Suco Laranja ------ R$ %.2lf\n\n", quant, prod[3]);
		}	
		else if (cod == 4)
		{
			printf("    ________________________\n");
			printf("     Digite a quantidade:  ");
	    	scanf("%d",&quant);
			printf("    _________________________\n");
			prod[4] = PROD4 * quant;
			
			printf("     %d Refri Lata -------- R$ %.2lf\n\n", quant, prod[4]);
		}
		
		printf("      \n");
		printf("     _____________________________________");
		printf("      \n");
		printf("     Deseja algo mais? (0 = NAO | 1 = SIM)");
		scanf("%d",&menu);
		printf("     \n");
		printf("      \n");
		
	}while(menu != 0);
	
	
	total = prod[1] + prod[2] + prod[3] + prod[4];
	
	
	printf("      \n");
	printf("     ___________________________");
	printf("      \n");
	printf("     | TOTAL DA COMPRA = %.2lf |\n ",total);
	printf("     ___________________________");
	printf("      \n");
	printf("     _________________________________________________\n");
	printf("     | Obrigado, %s! Volte sempre a LANCHONETE SENAI |\n",nome);
	printf("     _________________________________________________\n");

	return (0);
}

