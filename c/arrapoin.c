#include<stdio.h>
int main()
{
int arr[3][4]=
{
{10,11,12,13},
{20,11,21,22},
{12,23,34,54}
};
int i,j;
for(i=0;i<3;i++)
{
printf("adress of %d array =%d %d\n",i,arr[i],*(arr+i));
for(j=0;j<4;j++)
printf(" %d %d",arr[i][j],*(*(arr+i)+j));
printf("\n");
}
return 0;
}