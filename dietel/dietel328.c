/*(Validating User Input) Modify the program in Figure 3.10 to validate its inputs. On any input, if the value entered is other than 1 or 2, keep looping until the user enters a correct value.
*/
#include <stdio.h>
int main() {
int n = 0, l = 0, r = 100;
while ( r >= 0 ) {
 printf("Enter a n: ");
 scanf("%d", &n );
if ( n == 1 ) {
return 0;
 }
if ( n == 2 ) {
return 0;
 }
l += r;
}
return 0;
}
