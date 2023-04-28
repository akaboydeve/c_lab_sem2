#include<stdio.h>

int expo(int x ,int x2)
{
if(x2==1)
{
return x;
}
return (x*expo(x , (x2-1)));

}


int main()
{
int n , n2;
printf("Enter The 2 Numbers:  ");
scanf("%d",&n);
scanf("%d",&n2);
printf("The Result is %d\n",expo(n,n2));

}
