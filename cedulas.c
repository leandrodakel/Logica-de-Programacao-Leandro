#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    int valor = 0;
    int resto = 0;
    int nota100 = 0;
    int nota50 = 0;
    int nota20 = 0;
    int nota10 = 0;
    int nota5 = 0;
    int nota2 = 0;
    int nota1 = 0;
 
    scanf("%d",&valor);
 
   
 
    if(valor >= 0 && valor < 1000000)
    {
        nota100 = valor / 100;
        resto = valor % 100;
        
        nota50 = resto / 50;
        resto %= 50;
        
        nota20 = resto / 20;
        resto %= 20;
        
        nota10 = resto / 10;
        resto %= 10;
        
        nota5 = resto / 5;
        resto %= 5;
        
        nota2 = resto / 2;
        resto %= 2;
        
        nota1 = resto;
        
        printf("%d\n",valor);
        printf("%d nota(s) de R$ 100,00\n",nota100);
        printf("%d nota(s) de R$ 50,00\n",nota50);
        printf("%d nota(s) de R$ 20,00\n",nota20);
        printf("%d nota(s) de R$ 10,00\n",nota10);
        printf("%d nota(s) de R$ 5,00\n",nota5);
        printf("%d nota(s) de R$ 2,00\n",nota2);
        printf("%d nota(s) de R$ 1,00\n",nota1);
    }    
        
    else
    {
    }
 
    return 0;
}