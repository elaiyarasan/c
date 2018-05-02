#include <stdio.h>
int main() 
{
int l, i;
int n[5];
printf("Please enter a number:\n");
scanf("%d", &l);
for(i = 4; i >= 0; i--)
 {
if(l <= 0)
 n[i] = 0;
 n[i] = l % 10;
l /= 10;
}
for(i = 0; i < 5; i++)
{
printf("  %d  ", n[i]);
}
return 0;
}