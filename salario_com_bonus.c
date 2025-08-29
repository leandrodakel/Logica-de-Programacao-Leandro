#include <stdio.h>
 
int main() {
 
  char nome[20];
  double salario = 0.0;
  double vendas = 0.0;
  double BONUS = 0.15;
  double salario_final = 0.0;
 
 scanf("%s",nome);
 scanf("%lf",&salario);
 scanf("%lf",&vendas);
 
 salario_final = (vendas * BONUS) + salario;
 
 printf("TOTAL = R$ %.2lf\n",salario_final);
 
    return 0;
}