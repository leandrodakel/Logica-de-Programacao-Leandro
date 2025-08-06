#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
 double a = 0.0;
 double b = 0.0;
 double A1 = 3.5;
 double B1 = 7.5;
 double media = 0.0;
 
 scanf("%lf", &a);
 scanf("%lf", &b);
 
 media = ((a*A1) + (b*B1)) / (A1 + B1);
 
 printf("MEDIA = %.5lf\n", media);
 
    return 0;
}