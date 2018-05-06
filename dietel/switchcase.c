#include<stdio.h>
#include<string.h>
int main()
{
int grade;
int a=0,b=0,c=0,d=0,f=0;
printf("Enter the grades\n");
printf("Enter the EOF charecter to end the input\n");
while((grade=getchar())!=EOF)
{
switch(grade)
{
case 'A':
case 'a':
++a;
break;
case 'B':
case 'b':
++b;
break;
case 'C':
case 'c':
++c;
break;
case 'D':
case 'd':
++d;
break;
case 'F':
case 'f':
++f;
break;
default:
printf("Incorrect letter grade entered");
printf("Enter the new grad\n");
break;
}
}
printf("Total for each letter grade are\n");
printf("A: %d\n",a);
printf("B: %d\n",b);
printf("C: %d\n",c);
printf("D: %d\n",d);
printf("F: %d\n",f);
return 0;
}