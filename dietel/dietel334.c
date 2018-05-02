/*
3.34 (Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.33 so that it prints a hollow square. For example, if your program reads a size of 5, it should print
*/
#include <stdio.h>
int main() {
int e = 0, s, m;
printf("What size of square\n");
scanf("%d", &s );
while (e < s) {
m = 0;
while (m < s) {
if ( e == 0 || e == s - 1 || m == 0 || m == s - 1 ) {
printf("*");
} else {
printf(" ");
}
 m++;
 }
printf("\n");
e++;
}
return 0;
}

/*
output
***** 
*   *
*   *
*   *
*****
*/