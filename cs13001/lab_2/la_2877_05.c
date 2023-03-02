#include<stdio.h>
int main()
{
int sal;
printf("enter your salary=\n.");
scanf("%d",&sal);
int in_hand;
in_hand=(sal-700000);
printf("after standard deduction your salary is=%d\n.",in_hand);
printf(" press 1 to claim and 0 to unclaim \n");
int claim;
printf("select 1 or 0=\n");
scanf("%d",&claim);
if (claim==1)
{
 in_hand=in_hand-150000;
 printf("you have claimed the 80C and your final salary is = (%d)",(in_hand));
}
else
{
 printf("you have not claimed the 80C.\n");
}
if (in_hand<=500000)
{
printf("your tax is= %d\n",(in_hand*5)/100);
}
else if (in_hand<=700000)
{
printf("your tax is= %d\n",(in_hand*10)/100);
}
else if (in_hand<=1000000)
{
printf("your tax is= %f\n", (in_hand*12.5)/100);
}
else if (in_hand>=1200000)
{
printf("your tax is= %d\n",(in_hand*15)/100);
}  
else 
{
printf("salary not taxasable.\n");
}
return 0;
}
