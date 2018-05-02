/*(Square of Asterisks) Write a program that reads in the side of a square and then prints that square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For example, if your program reads a size of 4, it should print
*/

#include<stdio.h>
int main()
{
int count = 1;
while(count<=10)
{
printf("%s\n",count%2 ?"****":"++++");
count++;
}return 0;
}

