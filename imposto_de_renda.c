#include <stdio.h>
 
int main() {
 
    double sal = 0.0;
    double sobra = 0.0;
    double i1 = 0.0;
    double i2 = 0.0;
    double i3 = 0.0;
    double ir = 0.0;
    scanf("%lf",&sal);
    if(sal >=0 && sal <= 2000)
    {
        printf("Isento\n");
    }
    else if(sal > 2000 && sal <= 3000)
    {
        i1 = ((sal - 2000) * (0.08));
        ir = i1;
        printf("R$ %.2lf\n",ir);
    }
    else if(sal > 3000 && sal <= 4500)
    {
        i1 = (1000) * (0.08);
        sobra = sal - 3000; 
        i2 = sobra * (0.18);
        ir = i1 + i2;
        printf("R$ %.2lf\n",ir);
    }
    else if(sal > 4500)
    {
       i1 = (1000) * (0.08);
       i2 = (1500) * (0.18);
       sobra = sal - 4500;
       i3 = sobra * (0.28);
       ir = i1 + i2 + i3;
        printf("R$ %.2lf\n",ir);
    }
 
    return 0;
}