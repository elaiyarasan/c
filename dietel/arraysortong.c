#include<stdin.h>
#define SIZE 10
int main()
{
int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
int pass;
int i;
int hold;
printf( "Data items in original order\n" );
for ( i = 0; i < SIZE; i++ ) {
 printf( "%4d", a[ i ] );
}
or ( pass = 1; pass < SIZE; pass++ ) {
/* loop to control number of comparisons per pass */
for ( i = 0; i < SIZE - 1; i++ ) {
/* compare adjacent elements and swap them if first
element is greater than second element */
if ( a[ i ] > a[ i + 1 ] ) {
hold = a[ i ];
a[ i ] = a[ i + 1 ];
a[ i + 1 ] = hold;
}
}
}
printf( "\nData items in ascending order\n" );
for ( i = 0; i < SIZE; i++ ) {
 printf( "%4d", a[ i ] );
 }
 printf( "\n" );
 return 0;
 }