/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Hello World");
int a[5],i,j,k,predictvalue,m,points=0;
for(i=0;i<5;i++)
{
    a[i]=rand()%11;
}
for(j=0;j<10;j++)
{
    scanf("%d",&predictvalue);
    for(k=0;k<10;k++)
    {
        if(a[k]==NULL)
        {
        points=points+200;
        break;
        }
        if(a[k]==predictvalue)
        {
            points=points+10;
            for(m=k;m<5;m++)
            {
                a[k]=a[k+1];
            }
        }
    }
    
}
printf("\nyours point is%d",points);

    return 0;
}
