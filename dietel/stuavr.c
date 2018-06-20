#include<stdio.h>
#include<stdlib>
int qul(int avr)
{
if(average >= 90)
return 4;
else if( average >= 80)
return 3;
else if(average >= 70)
return 2;
else if(average >= 60)
return 1;
else
return 0;
}
int main()
{
int avr;
printf("Enter the student avr(between 0 to 100");
scanf("%d",&avr);
while(ave<0||avr>100)
{
printf("Enter the studen ave 0 to 100");
scanf("%d",&ave);
}
printf(qul[oints(avr);
return 0;
}