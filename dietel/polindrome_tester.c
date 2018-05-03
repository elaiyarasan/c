/*(Palindrome Tester) A palindrome is a number or a text phrase that reads the same back- ward as forward. For example, each of the following five-digit integers is a palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether or not it’s a palindrome. [Hint: Use the division and remainder operators to separate the number into its individual digits.]
*/
#include<stdio.h>
int main()
{
int i,j,k,l,m,n;
int digit = 0;
printf("enter the digits\n");
scanf("%d",&i);
j=i/10000;
k=i/1000%10;
l=i/100%10;
m=i/10%10;
n=i%10;
if(j==n&&k==m)
{
printf("Given number is polyndrom");
}
else
{
printf("Givn number is not polyndrom");
}
return 0;
}
