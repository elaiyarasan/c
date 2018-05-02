
/*You'll be given an array of integers and you have to print the integers in the reverse order.

Input Format

The first line of the input contains ,where is the number of integers.The next line contains integers separated by a space.

Constraints

, where is the integer in the array.

Output Format

Print the integers of the array in the reverse order in a single line separated by a space.

Sample Input

4
1 4 3 2

Sample Output

2 3 4 1
*/


int main() {
    int i,j,n,t,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=i-1;   //last index value
    i=0;        //first value
    while(i<j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
