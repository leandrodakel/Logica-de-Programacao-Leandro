#include <stdio.h>
 
int main() {
 
  double a = 0.0;
  double b = 0.0;
  double c = 0.0;
  double tri = 0.0;
  double cir = 0.0;
  double tra = 0.0;
  double qua = 0.0;
  double ret = 0.0;
  double PI = 3.14159;
  
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  
  tri = (a * c) / 2;
  cir = c * c * PI;
  tra = (a + b) *c / 2;
  qua = b * b;
  ret = a * b;
  
  printf("TRIANGULO: %.3lf\n",tri);
  printf("CIRCULO: %.3lf\n",cir);
  printf("TRAPEZIO: %.3lf\n",tra);
  printf("QUADRADO: %.3lf\n",qua);
  printf("RETANGULO: %.3lf\n",ret);
 
    return 0;
}