#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum status {CONTINUE, WON, LOST};
int roll(void);
int main(void)
{
int sum;
int myPoint;
enum status gamestatus;
srand(time(NULL));
sum = roll();
switch(sum)
{
case 7:
case 11:
gamestatus = WON;
break;
case 2:
case 3:
case 12:
gamestatus = LOST;
break;
gamestatus = CONTINUE;
myPoint = sum;
printf("point is %d\n",myPoint);
}
while(gamestatus == CONTINUE)
{
sum = roll();
if(sum == myPoint)
{
gamestatus = WON;
}
else
{
if(sum == 7)
{
gamestatus = LOST;
}}}
if(gamestatus == WON)
{
printf("player win\n");
}
if(gamestatus == LOST)
{
printf("player LOST\n");
}
else
{
printf("PLAYer lost\n");

}

return 0;
}
int roll(void)
{
int die1;
int die2;
int worksum;
die1=1+(rand()%6);
die2=1+(rand()%6);
worksum = die1+die2;
printf("player roled  %d +%d = %d\n",die1,die2,worksum);
return worksum;
}
