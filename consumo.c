#include <stdio.h>
 
int main() {
 
 int x = 0;
 double y = 0.0;
 double consumo = 0.0;
 
 scanf("%d",&x);
 scanf("%lf",&y);
 
 if(y <= 0)
 {
     printf("Número invalido\n");
 }
 
 else
 {
    consumo = x / y;
    printf("%.3lf km/l\n",consumo);
 }
 
    return 0;
}