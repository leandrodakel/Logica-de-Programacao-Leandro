#include <stdio.h>
 
int main() {
 
   int a = 0;
   int b = 0;
   int c = 0;
   int d = 0;
   int somaAB = 0;
   int somaCD = 0;
   
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   scanf("%d",&d);
   
   somaAB = a + b;
   somaCD = c + d;
   
   if(b>c && d>a && somaCD>somaAB && c>=0 && d>=0 && a%2==0)
   {
       printf("Valores aceitos\n");
   }
   else
   {
       printf("Valores nao aceitos\n");
   }
   
 
    return 0;
}