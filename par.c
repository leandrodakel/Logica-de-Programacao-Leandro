#include <stdio.h>

int main()
{
    
    int vet[10];
    int par = 0, impar = 0;
   
    for(int i = 0; i < 10; i++)
    {    
        scanf("%d", &vet[i]);
    }
   
    
    for(int k = 0; k < 10; k++)
    { 
        if(vet[k] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    
    printf("NUMEROS PARES: %d\n", par);
    printf("NUMEROS IMPARES: %d\n", impar);

    return 0;
}