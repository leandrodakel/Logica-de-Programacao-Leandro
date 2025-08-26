#include <stdio.h>
 
int main() {
 
   int x = 0;
   int y = 0;
   scanf("%d",&x);
   if(x >= 1 && x <= 1000)
   {
       if(x % 2 != 0)
       {
           for(int i = 1; i <= x; i=i+2)
           {
                printf("%d\n",i);
           }
     
       }
       else if(x % 2 == 0)
       {
           y = x - 1;
           for(int i = 1; i < y; i=i+2)
           {
                printf("%d\n",i);
           }
       }
   }
   else
   {
   }
    return 0;
}