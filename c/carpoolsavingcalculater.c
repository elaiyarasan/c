#include<stdio.h>
int main()
{
float miles,gasoline,avegasoline,parking,tolls,t;
printf("Enter the total miles driven per day\n");
scanf("%f",&miles);
printf("Enter Cost per gallon of gasoline\n");
scanf("%f",&gasoline);
printf("Enter average miles per gallon\n");
scanf("%f",&avegasoline);
printf("Enter  parking fees per day\n");
scanf("%f",&parking);
printf("Enter toll cost per day\n");
scanf("%f",&tolls);
t = (((gasoline + (miles/avegasoline))/100) + parking + tolls);
printf("Total cost per day is:%f\n",t);
return 0;
}
