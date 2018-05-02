/*Input Format

Input will contain two integers,  and , separated by a newline.

Output Format

You have to print the updated value of  and , on two different lines.


P.S.: Input/ouput will be automatically handled. You only have to complete the void update(int *a,int *b) function.

Sample Input

4
5
Sample Output

9
1*/
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
   int t=*a;

*a=*a+*b;

if((t)>(*b))
{
    (*b)=(t)-(*b);
}
else
{
    (*b)=(*b)-(t);
}
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);


    return 0;
}
