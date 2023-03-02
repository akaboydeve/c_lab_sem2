#include<stdio.h>

int main()
{
int amount=0;
int deducted=0;
float tax=0.0;
int claim=1;
printf("Enter The Amount:\n");
scanf("%d",&amount);

printf("Do You want to Claim 80C - 1,50,000 \n Enter 1 For Yes or 0 For No");
scanf("%d",&claim);

if((claim == 1))
{
deducted= amount-(700000+150000);
}
else if(claim == 0)
{
deducted= amount-(700000);
}

if((amount<1200000)&&(amount>100000))
{
tax = deducted - (deducted *(15/100));
}
else if((amount<=1000000)&&(amount>700000))
{
tax = deducted - (deducted *(12.5/100));
}
else if((amount<=700000)&&(amount>500000))
{
tax = deducted - (deducted *(10/100));
}
else if((amount<=500000))
{
tax = deducted - (deducted *(5/100));
}



printf("Tax is %f\n",tax);

return 0;
}
