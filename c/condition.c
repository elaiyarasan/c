#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N; 
    if(1<=N<=1000)
    {
    scanf("%d",&N);
    }
   if(N%2!=0)
    {
        printf("Weird");
    }
    else if(N%2==0)
    {
        if(2<=N<=5)
        {
            printf("Not Weird");
        }
        else if(6<=N<=20)
        {
            printf("Weired");
        }
        else
        {
            printf("Not Weird");
        }
    }
    return 0;
}
