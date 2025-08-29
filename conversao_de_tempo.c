#include <stdio.h>
 
int main() {
 
int n = 0;
int h = 0;
int m = 0;
int s = 0;

scanf("%d",&n);

h = n / 3600;
n %= 3600;

m = n / 60;
n%= 60;

s = n;

printf("%d:%d:%d\n",h,m,s);

    return 0;
}