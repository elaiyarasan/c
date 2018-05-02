#include<stdio.h>

int gcd(int v1,int v2)
{
int temp;
if(v1>v2)
{
temp=v1;
v1=v2;
v2 = temp;
}
if(v2%v1 == 0)
{
return v1;
}else{
return gcd(v2%v1,v1);
}
}
int lcm(int n1,int n2)
{
int gc=gcd(n1,n2);
return(n1*n2)/gc;
}

int main()
{
int array[20],limit,count,value=1;
printf("enter the number of element\n");
scanf("%d",&limit);
count=0;
while(count<limit)
{
scanf("%d",&array[count]);
count++;
}
count = 0;
while(count<limit)
{
value = lcm(value,array[count]);
count++;
}
printf("lcm of given number : %d\n",value);
return 0 ;
}

