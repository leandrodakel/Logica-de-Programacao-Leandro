#include <stdio.h>
 
int main() {
 
   double x1 = 0.0;
   double x2 = 0.0;
   double y1 = 0.0;
   double y2 = 0.0;
   double eixo_x = 0.0;
   double eixo_y = 0.0;
   double result = 0.0;
   
   double x = 0.0;
   double novo_x = 0.0;
 
 
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    
    eixo_x = ((x2 - x1) * (x2 - x1));
    eixo_y = ((y2 - y1) * (y2 - y1));
    
    result = (eixo_x + eixo_y);
    
    if(result < 0)
    {
    
    }
    
    else if(result >= 0)
    {
        
    x = result;
    
    for(int i=0; i<1000; i++)
    {
        novo_x = 0.5 * (x + (result/x));
        x = novo_x;
    }
     
    printf("%.4lf\n", x);
    
    }
    
    return 0;
}