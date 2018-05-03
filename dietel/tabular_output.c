/*3.26 (Tabular Output) Write a program that utilizes looping to produce the following table of
values:
A A+2 A+4 A+6
3  5  7   9
4  6  8   10
*/

#include<stdio.h>
int main()
	{
	int A,i,j,k,l,m;

	printf("Enter the A value\n");
	scanf("%d",&A);

	printf("A   A+2   A+4   A+6\n");
	printf("%d",A);
for(i=2;i<4;i+=2)
	{
	l=A+i;
	printf("  %d",l);
	}
for(j=i;j<6;j+=2)
	{
	l=A+j;
	printf("  %d",l);
	}
for(k=j;k<8;k+=2)
	{
	l=A+k;
	printf("  %d",l);
	}
for(m=k;m<10;m+=2)
	{
	l=A+m;
	printf("  %d",m);
	}
return 0;
}

