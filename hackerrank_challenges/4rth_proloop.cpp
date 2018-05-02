
/*
You will be given two positive integers a,b and (a<=b), separated by a newline.

Output Format

For each integer n in the interval[a,b] :

    If 1<=n<=9 , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
    Else ifn<=9 and it is an even number, then print "even".
    Else if n>9 and it is an odd number, then print "odd".



Sample Input

8
11

Sample Output

eight
nine
even
odd
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
int a,b;
    cin>>a>>b;
    for(a;a<=b;a++)
    {
        if(a==1)
        {
            cout<<"one"<<endl;
        }
         else if(a==2)
        {
            cout<<"two"<<endl;
        }
        else if(a==3)
        {
            cout<<"three"<<endl;
        }
         else if(a==4)
        {
            cout<<"four"<<endl;
        }
         else if(a==5)
        {
            cout<<"five"<<endl;
        }
        else  if(a==6)
        {
            cout<<"six"<<endl;
        }
        else  if(a==7)
        {
            cout<<"seven"<<endl;
        }
        else  if(a==8)
        {
            cout<<"eight"<<endl;
        }
        else if(a==9)
        {
            cout<<"nine"<<endl;
        }
        else if(a%2==0)
        {
            cout<<"even"<<endl;
        }
        else if(a%2!=0)
        {
            cout<<"odd"<<endl;
        }
    }
    
      
    return 0;

}
