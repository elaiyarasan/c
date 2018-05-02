/*You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

+= : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.
a += b is equivalent to a = a + b;
Input Format

Input will contain four integers -  , one in each line.

Output Format

Print the greatest of the four integers. 
PS: I/O will be automatically handled.

Sample Input

3
4
6
5
Sample Output

6*/
#include<stdio.h>


int max(int a,int b,int c,int d)
{
  if(a>b && a>c && a>d)    
      return a;
  else if(b>c && b>d)
      return b;
  else if(c>d)
      return c;
  else
      return d;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
