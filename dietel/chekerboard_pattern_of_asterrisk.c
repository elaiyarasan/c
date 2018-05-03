/*Checkerboard Pattern of Asterisks) Write a program that displays the following checker- board pattern:
********
 ********
********
 ********
********
 ********
********
 ********
 Your program must use only three output statements, one of each of the following forms:
printf( "* " );
 printf( " " );
  printf( "\n" );
*/
#include <stdio.h>
int main() {
int i = 1;
int n = 0;
int z = 64;
int y = 0;
while ( i <= z ) {
n = i % 8;
y = i % 16 - 8;
printf( "* " );
if ( n == 0 ) {
printf( "\n" );
}
if ( y == 0 ) {
printf( " " );
}
i++;
}
return 0;
}



