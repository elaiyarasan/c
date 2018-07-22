#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int c,n,fact=1;
    scanf("%d",&c);

    for(n=1;n<=c;n++)
    {
    fact=fact*n;
    }
        printf("%d",fact);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

