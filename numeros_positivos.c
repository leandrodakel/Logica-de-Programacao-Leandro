#include <stdio.h>
 
int main() {
 
    int vet[6];
    int pos = 0;
   
        for(int i = 0; i < 6; i++)
        {
            scanf("%d",&vet[i]);
        }
        for(int i = 0; i < 6; i++)
        {
            if(vet[i] > 0)
            {
               pos++; 
            }
        }
    
    printf("%d valores positivos\n",pos);
    return 0;
}