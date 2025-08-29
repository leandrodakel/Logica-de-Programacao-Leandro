#include <stdio.h>
 
int main() {
 
  int cod1, cod2, qtd1, qtd2;
  double valor1, valor2, total;
  
  //primeira linha
  scanf("%d %d %lf", &cod1, &qtd1, &valor1);
  
  //segunda linha
  scanf("%d %d %lf", &cod2, &qtd2, &valor2);
  
  //saída
  total = (valor1 * qtd1) + (valor2 * qtd2);
  printf("VALOR A PAGAR: R$ %.2lf\n", total);
  
    return 0;
}