#include<stdio.h>
int main()
{
	int i,f=1,n;
	printf("Enter the factorial number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f = f * i;
	}
	printf("factorial of %d is %d\n",n,f);
return 0;
}
