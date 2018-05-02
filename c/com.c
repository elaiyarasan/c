#include<stdio.h>
int main()
{
int a[100],b[100],n,p,i,j,x;
printf("enter the value of n\n");
scanf("%d%d",&n,&p);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<p;j++)
{
scanf("%d",&b[j]);
}
scanf("%d%d",&x);
for(i=x;i<n;i++)
{

printf("%d",a[i]);
}
printf("\n");
for(j=0;j<p;j++)
{
printf("%d",b[j]);
}
return 0;
}