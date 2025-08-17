#include<stdio.h>

int main()

{
    double PROD1 = 15.00;
    double PROD2 = 10.00;
    double PROD3 = 9.00;
    double PROD4 = 5.00;
	char nome[20];
	int cod, quant = 0;
	int quant1 = 0;
	int quant2 = 0;
	int quant3 = 0;
	int quant4 = 0;

	double prod[5];

	double total = 0.0;
	int menu = 0;

do{

	PROD1 = 15.00;
    PROD2 = 10.00;
    PROD3 = 9.00;
    PROD4 = 5.00;
	cod, quant = 0;
	quant1 = 0;
	quant2 = 0;
	quant3 = 0;
	quant4 = 0;

	prod[5];

	total = 0.0;
	menu = 2;
	
	printf("      \n");
	printf("BEM-VINDO A LANCHONETE SABOR & CIA!\n");
	printf("      \n");
	printf("Informe seu nome: ");
	scanf("%s", nome);

	printf("      \n");
	printf("     Bem-vindo, %s !\n\n", nome);
	
	printf("     ---------------------------------------------\n");
	printf("     |                   CARDAPIO                |\n");
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
	        printf("   \n");
			printf("     Digite o codigo do produto:  ");
	        scanf("%d\a",&cod);



		switch(cod)
		{
			case 1:

			printf("    \n");
			printf("    | X-Salada ---------- R$ 15.00 |\n");
			printf(" \n");

			break;

			case 2:

			printf("    \n");
			printf("    | X-Burguer --------- R$ 10.00 |\n");
			printf("    \n");

			break;

			case 3:

			printf("    \n");
			printf("    | Suco Laranja ------ R$ 9.00  |\n");
			printf("    \n");

			break;

			case 4:

			printf("    \n");
			printf("    | Refri Lata -------- R$ 5.00  |\n");
			printf("   \n");

			break;

			default:

			printf("    \n");
			printf("    | Codigo invalido!  |\a\n");
			printf("   \n");

		}



		if(cod == 1)
		{
			printf("    \n");
		    printf("     Digite a quantidade:  ");
	    	scanf("%d",&quant);
			printf("    \n");
			prod[1] = PROD1 * quant;
			quant1 = quant;
			printf("     %d X-Salada ---------- R$ %.2lf\n\n", quant, prod[1]);
			printf("      \n");
		}

		else if (cod == 2)
		{
			printf("    \n");
			printf("     Digite a quantidade:  ");
	    	scanf("%d",&quant);
			printf("    \n");
			prod[2] = PROD2 * quant;
			quant2 = quant;
			printf("     %d X-Burguer --------- R$ %.2lf\n\n", quant, prod[2]);
			printf("      \n");
		}

		else if (cod == 3)
		{
			printf("    \n");
			printf("     Digite a quantidade:  ");
	    	scanf("%d",&quant);
			printf("    \n");
			prod[3] = PROD3 * quant;
			quant3 = quant;
			printf("     %d Suco Laranja ------ R$ %.2lf\n\n", quant, prod[3]);
		}
		else if (cod == 4)
		{
			printf("    \n");
			printf("     Digite a quantidade:  ");
	    	scanf("%d",&quant);
			printf("    \n");
			prod[4] = PROD4 * quant;
			quant4 = quant;
			printf("     %d Refri Lata -------- R$ %.2lf\n\n", quant, prod[4]);
		}

		printf("      \n");
		printf("     --------------------------------------\n");
		printf("      \n");
		printf("     Deseja algo mais? (0 = NAO | 1 = SIM)");
		scanf("%d",&menu);
		printf("     \n");
		printf("      \n");

	}while(menu != 0);

	printf("     RESUMO DO PEDIDO:\n");
	printf("     --------------------------------------\n");
	printf("      \n");
	printf("     %d X-Salada ------- R$ %.2lf\n", quant1, prod[1]);
	printf("     %d X-Burguer ------ R$ %.2lf\n", quant2, prod[2]);
	printf("     %d Suco Laranja---- R$ %.2lf\n", quant3, prod[3]);
	printf("     %d Refri Lata ----- R$ %.2lf\n", quant4, prod[4]);
	printf("     --------------------------------------\n");
	total = prod[1] + prod[2] + prod[3] + prod[4];


	printf("      \n");
	printf("     ");
	printf("      \n");
	printf("     | TOTAL DA COMPRA = R$ %.2lf |\n ",total);
	printf("     ");
	printf("      \n");
	printf("     Deseja encerrar o programa ou fazer um novo pedido? (0 = ENCERRAR | 1 = NOVO PEDIDO)\n");
	scanf("%d",&menu);
		printf("     \n");
		printf("      \n");
}while(menu != 0);
		

	printf("     ________________________________________________________\n");
	printf("      \n");
	printf("     | Obrigado, %s! Volte sempre a LANCHONETE SABOR & CIA! |\n",nome);
	printf("     ________________________________________________________\n");

	return (0);
}