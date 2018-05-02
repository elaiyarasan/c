#include<stdio.h>
#include<string.h>
int main()
{
int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int a,g;
double c=4.0,m;
char cl[200];
   
scanf("%d",&a);
scanf("%lf",&c);

scanf(" %[^\n]s",cl);
g=a+i;
m=d+c;
printf("%d\n",g);
printf("%.1f\n",m);

printf("%s%s ",s,cl);

return 0;
}