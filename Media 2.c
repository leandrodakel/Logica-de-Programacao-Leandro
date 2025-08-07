#include <stdio.h>
 
int main() {
 
double a = 0.0;
double b = 0.0;
double c = 0.0;
int a1 = 2;
int b1 = 3;
int c1 = 5;
double media = 0.0;

scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);

media = ((a * a1) + (b * b1) + (c * c1)) / (a1 + b1 + c1);

printf("MEDIA = %.1lf\n",media);

    return 0;
}