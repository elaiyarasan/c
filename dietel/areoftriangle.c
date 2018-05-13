#include<stdio.h>
//called fuction
int fun(int par1,int par2)  //par-parameter
{
int sum=(par1*par2)/2;
return sum;					//return sum
}

int main()
{
int arg1,arg2,sum;    	//arg-argument
printf("Enter the number of arg\n");
scanf("%d%d",&arg1,&arg2);
sum = fun(arg1,arg2);   //call function
printf("%d",sum);
return 0;
}