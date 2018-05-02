//prime number b/w 2 int number 
#include<stdio.h>
#include<math.h>
int main()
{
int i,m,n,temp,rem;
int isprime(int k);
printf("enter the value of m,n");
scanf("%d%d",&m,&n);
if(m>n)
{
temp = m;
n=m;
n=temp;
}
rem = (m%2);
if(rem==0)
m++;
printf("prime nuber b/w %d and %d is\n",m,n);
for(i=m;i<=n;i=i+2)
{
if(isprime(i))
printf("%d\n",i);
}
}
int isprime(int k)
{
int limit,td,remain;
remain = k%2;
if(remain == 1)
{
td = 3;
limit =sqrt(k);
while (remain == 1 &&(td <= limit ))
{
remain =k %td;
td = td+2;
}
}return (remain);
}
