#include <stdio.h>
int chgstr(char []);
int main()
{
char a[100];
int n;
printf("Input a valid string to convert to integer\n");
scanf("%s", a);
n = chgstr(a);
printf("String  = %s\nInteger = %d\n", a, n);
return 0;
}

int chgstr(char a[])
 {
int c, sig, off, n;
if (a[0] == '-')
 {  
 sig = -1;
  }
if (sig == -1)
 {  
off = 1;
  }
 else 
 {
off = 0;
  }
n = 0;
for (c = off; a[c] != '\0'; c++) 
{   
 n = n * 10 + a[c] - '0';
   }
 if (sig == -1) {
  n = -n;
  }
return n;
}