#include<stdio.h>
int main()
{
int product;

scanf("%d",&product);
switch(product)
{
case 1:
printf("1stcase");
break;
case 2:
printf("2ndcase");
break;
default:
printf("3rdcase");
}
return 0;
}