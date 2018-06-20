#include <stdio.h>
#include<stdlib>
int calcSecondsFromTvelwe(int hh, int mm, int ss)
{
	return (hh % 12 * 3600 + mm * 60 + ss);   

int main()
{
	int hours, minutes, seconds;
	int time1, time2;
	printf("Enter first time (hours, minutes and seconds\n");
	scanf("%d%d%d",&hours,&minutes,&seconds);
	time1 = calcSecondsFromTvelwe(hours, minutes, seconds);
	printf("Enter second time (hours, minutes and seconds");
	scanf("%d%d%d",&hours,&minutes,&seconds);
	time2 = calcSecondsFromTvelwe(hours, minutes, seconds);
	printf("Amount of time in seconds between two times is:%d %d ",abs(time1 - time2));
	return 0;
	
}