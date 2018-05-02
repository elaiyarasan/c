#include<stdio.h>
int main()
{
float weight,height,i;
printf("Enter the weight in pounds\n");
scanf("%f",&weight);
printf("Enter the height in inches\n");
scanf("%f",&height);
i=(weight*703)/(height*height);
printf("BMI is %f\n",i);
if(weight<18.5)
{
printf("Underweight\n");
}
else if(18.5<weight<24.9)
{
printf("Normal\n");
}
else if(25<weight<29.9)
{
printf("Overweight\n");
}
else if(30<=weight)
{
printf("Obese\n");
}

return 0;
}