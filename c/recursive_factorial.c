#include<stdio.h>
int recursive(int n);
int main()
{
int n;
printf("Enter the value of n");
scanf("%d",&n);
printf("%d",recursive(n));
return 0;
}
int recursive(int n)
{
if(n>1)
return n*recursive(n-1);
else 
return 1;
}