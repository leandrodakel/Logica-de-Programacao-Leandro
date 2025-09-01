#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m[10][10];
    printf("Vamos realizar uma leitura de uma matriz 10x10\n");
    for(int l = 0; l < 10; l++)
    {
        for(int c = 0; c < 10; c++)
        {
            printf("Matriz[%d][%d] = ",l,c);
            scanf(" %c",&m[l][c]);
        }
    }
    for(int l = 0; l < 10; l++)
    {
        printf("|");
       for(int c = 0; c < 10; c++)
        {
            printf(" %c ",m[l][c]);
            
        }
        printf("|\n");
    }
    return 0;
}
