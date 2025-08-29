#include <stdio.h>
 
int main() {
 
int a = 0;
int b = 0;
int c = 0;
int maior = 0;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if (a >= b && a >= c)
{
    maior = a;
    printf("%d eh o maior\n", maior);
}
else if(b >= a && b >= c)
{
    maior = b;
    printf("%d eh o maior\n", maior);
}
else
{
    maior = c;
    printf("%d eh o maior\n", maior);
}
    return 0;
}