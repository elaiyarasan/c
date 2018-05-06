#include<stdio.h>
int main()
{
int i,j,k;
for(i=0;i<=5;i++)
{
scanf("%d",&j);
if(j<=30&&j>=0)
{
for(k=0;k<j;k++)
{
printf("*");
}
}
printf("\n");
}
return 0;
}


