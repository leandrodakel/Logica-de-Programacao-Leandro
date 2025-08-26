#include <stdio.h>
 
int main() {
 
    double vet[6];
    double media = 0.0;;
    int pos = 0;
    
    for(int i = 0; i < 6; i++)
    {
        scanf("%lf",&vet[i]);
    }
    
    for(int w = 0; w < 6; w++)
    {
        if(vet[w] < 0)
        {
            vet[w] = 0.0;
        }
    }
    
    for(int k = 0; k < 6; k++)
    {
        if(vet[k] > 0)
        {
            pos++;
        }
    }
    media = (vet[0] + vet[1] + vet[2] + vet[3] + vet[4] + vet[5]) / pos;
    printf("%d valores positivos\n",pos);
    printf("%.1lf\n",media);
 
    return 0;
}