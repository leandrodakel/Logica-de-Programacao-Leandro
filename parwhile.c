#include <stdio.h>

int main()
{
    
    int vet[10];
    int par = 0, impar = 0, k = 0, l = 0;
   
   while(k < 10)
    {    
        scanf("%d", &vet[k]);
	k++;
    }
   
 	while(l < 10)
	{
        	 if(vet[l] % 2 == 0)
       		 {
          		par++;
       		 }
      		 else
       		 {
            		impar++;
      		 }
		l++;
 	 }
    
    printf("NUMEROS PARES: %d\n", par);
    printf("NUMEROS IMPARES: %d\n", impar);

    return 0;
}