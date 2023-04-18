#include<stdio.h>

int add(int a , int b)
{
int res = 0;
res = 2*(a+b);
return res;
}

int main()
{
int x , y;
printf("Enter 2 Sides\n");
scanf("%d",&x);
scanf("%d",&y);

printf("The Result Is %d \n",add(x,y));

}
