#include <stdio.h>

 void printCharacters( const char *sPtr ); 8
 int main( void )
 {

char string[] = "print characters of a string";
 printf( "The string is:\n" );
 printCharacters( string );
 printf( "\n" );
 return 0;
 }

 void printCharacters( const char *sPtr )
 {
 for ( ; *sPtr != '\0'; sPtr++ ) 
 { 
 
printf( "%c", *sPtr ); } 
}