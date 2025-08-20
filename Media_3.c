#include<stdio.h>

int main()
{
    double n1 = 0.0;
    double n2 = 0.0;
    double n3 = 0.0;
    double n4 = 0.0;
    int P1 = 2;
    int P2 = 3;
    int P3 = 4;
    int P4 = 1;
    double exame = 0.0;
    double media = 0.0;
    double media_final = 0.0;
    
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
   
        media = ((n1 * P1) + (n2 * P2) + (n3 * P3) + (n4 * P4)) / (P1 + P2 + P3 + P4);
        
        if(media >= 7.0)
        {
            printf("Media: %.1lf\n", media);
            printf("Aluno aprovado.\n");
        }
        
        else if(media < 5.0)
        {
            printf("Media: %.1lf\n", media);
            printf("Aluno reprovado.\n");
        }
        
         else if(media >= 5.0 && media <= 6.9)
        {
            printf("Media: %.1lf\n", media);
            printf("Aluno em exame.\n");
            scanf("%lf", &exame);
            printf("Nota do exame: %.1lf\n", exame);
            
            
            media_final = (media + exame) / 2.0;
            
            if (media_final >= 5.0)
            {
                printf("Aluno aprovado.\n");
                printf("Media final: %.1lf\n", media_final);
            }
            else
            {
                printf("Aluno reprovado.\n");
                printf("Media final: %.1lf\n", media_final);
            }
            
        }
        
    
    return 0;
}