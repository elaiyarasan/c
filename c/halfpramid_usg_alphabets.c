#include<stdio.h>
int main()
{
int i,j;
char c, b='A';
printf("enter the uppercase charecter you want to print in last row:");
scanf("%c",&c);
for(i=1;i<=(c-'A'+1);++i)
{
for(j=1;j<=i;++j)
{
printf("%c",b);
}
++b;
printf("\n");

}
return 0 ;
}