#include<stdio.h>

void rec(int x)
{
if(x == 0)
{
return ;
}
rec(x-1);
printf("%d\n",x);
}

int main()
{
int n;
printf("Enter The Number");
scanf("%d",&n);
rec(n);
return 0;
}
