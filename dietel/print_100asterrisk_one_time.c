/*
3.38 Write a program that prints 100 asterisks, one at a time. After every tenth asterisk, your pro- gram should print a newline character. [Hint: Count from 1 to 100. Use the remainder operator to recognize each time the counter reaches a multiple of 10.]
*/
#include <stdio.h>

int main() {
  int i = 1;
  int n = 0;
  int z = 100;

  while ( i <= z ) {
    n = i % 10;
    printf( "* " );
    if ( n == 0 ) {
      printf( "\n" );
    }
    i++;
  }

  return 0;
}