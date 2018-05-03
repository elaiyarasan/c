/*(Diameter, Circumference and Area of a Cirle) Write a program that reads the radius of a circle (as a float value) and computes and prints the diameter, the circumference and the area. Use the value 3.14159 for π.
*/
#include <stdio.h>

int main() {
  float pi = 3.14159, r, d, c, a;

  printf( "Enter the r of the circle:\n" );
  scanf( "%f", &r );

  d = r * 2;
  printf( "The d is %f\n", d  );

  c = 2 * pi * r;
  printf( "The c is %f\n", c );

  a = pi * (r * r);
  printf( "The a is %f\n", a );

  return 0;
}