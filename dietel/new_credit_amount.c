#include<stdio.h>
int main()
{
int acc_num;
int cre_bef_rec;
int cur_bal;
int cur_cred;
int count=0;
do
{
printf("Enter the user acount number\n");
scanf("%d",&acc_num);
printf("Enter the credit limit befor reccision\n");
scanf("%d",&cre_bef_rec);
printf("Enter the current balance\n");
scanf("%d",&cur_bal);
cur_cred=cre_bef_rec/2;
printf("\n\n");
printf("Your account number: %d\n",acc_num);
printf("Your current credit limit: %d\n",cur_cred);
printf("Your current balance: %d\n",cur_bal);
if(cur_bal>cur_cred)
{
printf("Your credit amount is exeeded\n");
}
printf("\n\n");
}
while(++count<3);

return 0;
}