#include <stdio.h>
#include <ctype.h>
 
void main()
{
 char s[100];
 int count, ch, i;
 printf("Enter a s \n");
for (i = 0;(s[i] = getchar()) != '\n'; i++)
{

 }
 s[i] = '\0';
 count = i;
printf("The given s is   : %s", s);
printf("\n Case changed s is: ");
for (i = 0; i < count; i++)
{
ch = islower(s[i])? toupper(s[i]) :
tolower(s[i]);
 putchar(ch);
 }
}