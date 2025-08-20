#include <stdio.h>

double RaizQuadrada(double delta);

int main() {
 
   double a = 0.0;
   double b = 0.0;
   double c = 0.0;
   double delta = 0.0;
   double x1 = 0.0;
   double x2 = 0.0;
 
    scanf("%lf %lf %lf", &a, &b, &c);
    
    delta = (b * b) - (4 * a * c);
    
    if(a == 0 || delta < 0)
    {
        printf("Impossivel calcular\n");
    }
 
    else
    {
        x1 = ((-1 * b) + RaizQuadrada(delta)) / (2.0 * a);
        x2 = ((-1 * b) - RaizQuadrada(delta)) / (2.0 * a);
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
 
 
    return 0;
}

double RaizQuadrada(double delta)
{
    double x = 0.0;
    double novo_x = 0.0;
    x = delta;
    for(int i = 0; i < 100; i++)
    {
        novo_x = (0.5) * (x + (delta / x));
        x = novo_x;
    }
    return(x);
}
    

