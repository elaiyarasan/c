/*(Multiples of 2 with an Infinite Loop) Write a program that keeps printing the multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should not terminate (i.e., you should create an infinite loop). What happens when you run this program?*/

#include <stdio.h>

int main() {
  int counter = 1, a;

  while ( counter > 0 ) {
    a = counter + counter;

    printf("%d\n", a );
    counter = a;
  }

  return 0;
}