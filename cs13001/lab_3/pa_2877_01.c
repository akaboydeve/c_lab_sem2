#include<stdio.h>

int main()
{
int a=0 ,b=0;
char c;

printf("Enter The 2 Numbers\n");
scanf("%d",&a);
scanf("%d",&b);

printf("Enter Operation Choice\n");

scanf(" %c",&c);

switch(c)
{

case '+':
printf("The Sum is %d\n",(a+b));
break;

case '-':
printf("The Sub is %d\n",(a-b));
break;

case '*':
printf("The Product is %d\n",(a*b));
break;

default:
printf("Wrong Input\n");

}




return 0;
}
