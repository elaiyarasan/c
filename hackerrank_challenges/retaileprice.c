#include<stdio.h>
int main()
{
int quan,product;
float retaile_price,total,total_price_per_day=0;
float sum_of_product_sale_week=0;
int count=1;
int count1=0;
int day;

while(count<8)
{
for(day=1;day<8;day++)
{
printf("DAY: %d\n",day);
while(count1<=5)
{
for(product=1;product<6;product++)
{
	switch(product)
	{
		case 1:
			retaile_price = 2.98;
			printf("Enter the quantity of the 1 product\n");
			scanf("%d",&quan);
		break;

		case 2:
			retaile_price = 4.50;
			printf("Enter the quantity of the 2nd product\n");
			scanf("%d",&quan);
		break;

		case 3:
			retaile_price = 9.98;
			printf("Enter the quantity of the 3rd product\n");
			scanf("%d",&quan);
		break;

		case 4:
			retaile_price = 4.49;
			printf("Enter the quantity of the 4th product\n");
			scanf("%d",&quan);
		break;

		case 5:
			retaile_price = 6.87;
			printf("Enter the quantity of the 5th product\n");
			scanf("%d",&quan);
		break;
	default:
		printf("Enter the correct product\n");
		break;
	}
}

total = quan * retaile_price;

total_price_per_day = total_price_per_day + total;
printf("%f\n",total_price_per_day);

count1=count1+1;
}
}
sum_of_product_sale_week = sum_of_product_sale_week + total_price_per_day;
count=count+1;


}
printf("\n\n");
printf("sum_of_product_sale_week:%f\n\n",sum_of_product_sale_week);
return 0;
}