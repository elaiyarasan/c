#include<stdio.h>
int main()
{
int average,total,grad,count;
total=0;
count=0;
printf("Enter the grad\n");
scanf("%d",&grad);
while(grad!=-1)
{
total=total+grad;
count=count+1;
scanf("%d",&grad);

}
printf("%d\n",grad);
if(count!=0)
{
average=total/count;
printf("%d\n",average);
}
else
printf("No grad was entered");
return 0;
}