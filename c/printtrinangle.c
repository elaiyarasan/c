#include<stdio.h>
int main()
{
int i,h,j;
printf("enter the number of rows:");
scanf("%d",&h);
for(i=1;i<=h;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}return 0;
}