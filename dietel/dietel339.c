/*(Counting 7s) Write a program that reads an integer and determines and prints how many digits in the integer are 7s.
*/

#include <stdio.h>
int l = 0;
int a, b, c, d, e, n;

int main() {
  printf( "Input a  digit\n" );
  scanf("%d", &n );

  a = n % 10;
  b = n / 10 % 10;
  c = n / 100 % 10;
  d = n / 1000 % 10;
  e = n / 10000;
if ( a == 7 ) {
    l++;
  }
 if ( b == 7 ) {
    l++;
  }
if ( c == 7 ) {
    l++;
  }
if ( d == 7 ) {
    l++;
  }
if ( e == 7 ) {
    l++;
  }
printf("%d\n", n );

  return 0;
}