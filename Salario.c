#include <stdio.h>
 
int main() {
 
 int number = 0;
 int hours = 0;
 double value = 0.0;
 double salary = 0.0;
 
 scanf("%d",&number);
 scanf("%d",&hours);
 scanf("%lf",&value);
 scanf("%lf",&value);
 
 salary = hours * value;
 
 printf("NUMBER = %d\n",number);
 printf("SALARY = U$ %.2lf\n",salary);
 
return 0;
}