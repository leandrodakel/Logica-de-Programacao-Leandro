#include <stdio.h>
 
int main() {
 
 int idade = 0;
 int resto = 0;
 int ano = 0;
 int mes = 0;
 int dia = 0;
 
 scanf("%d",&idade);
 
 ano = idade / 365;
 resto = idade % 365;
 
 mes = resto / 30;
 resto %= 30;
 
 dia = resto;
 
 printf("%d ano(s)\n",ano);
 printf("%d mes(es)\n",mes);
 printf("%d dia(s)\n",dia);
 
    return 0;
}