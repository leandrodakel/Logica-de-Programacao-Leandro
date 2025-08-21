#include <stdio.h>
#include <string.h>
 
int main() {
 
    char filo[15];
    char familia[15];
    char ordem[15];
    char animal[15];
    
    char ver = 'v';
    char inv = 'i';
    
    char ave = 'v';
    char mam = 'm';
    char ins = 't'; 
    char ane = 'l';
    
    char car = 'c';
    char oni = 'o';
    char oni_NULL = 'h';
    char her = 'b';
    char hem = 'f';
    
    
    scanf("%s", filo);
    scanf("%s", familia);
    scanf("%s", ordem);
    
    if (strchr(filo,ver) != NULL && strchr(familia, ave) != NULL && strchr(ordem,car) != NULL)
    {
        printf("aguia\n");
    }    
    
    else if(strchr(filo,ver) != NULL && strchr(familia,ave) != NULL && strchr(ordem,car) == NULL && strchr(ordem,oni_NULL) == NULL)
    {
        printf("pomba\n");
    }
 
    else if(strchr(filo,ver) != NULL && strchr(familia,mam) != NULL && strchr(ordem,car) == NULL && strchr(ordem,oni_NULL) == NULL)
    {
        printf("homem\n");
    }
    
    else if(strchr(filo,ver) != NULL && strchr(familia,mam) != NULL && strchr(ordem,her) != NULL)
    {
        printf("vaca\n");
    }
    
    else if(strchr(filo,inv) != NULL && strchr(familia,ins) != NULL && strchr(ordem,hem) != NULL)
    {
        printf("pulga\n");
    }
    
    else if(strchr(filo,inv) != NULL && strchr(familia,ins) != NULL && strchr(ordem,her) != NULL)
    {
        printf("lagarta\n");
    }
    
    else if(strchr(filo,inv) != NULL && strchr(familia,ane) != NULL && strchr(ordem,hem) != NULL)
    {
        printf("sanguessuga\n");
    }
    
    else if(strchr(filo,inv) != NULL && strchr(familia,ane) != NULL && strchr(ordem,car) == NULL && strchr(ordem,oni_NULL) == NULL)
    {
        printf("minhoca\n");
    }
    
    return 0;
}