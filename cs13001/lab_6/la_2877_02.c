#include<stdio.h>

int add(int a , int b)
{
int res = 0;
res = a*b;
return res;
}

int main()
{
int x , y;
printf("Enter 2 sides \n");
scanf("%d",&x);
scanf("%d",&y);

printf("The Result Is %d \n",add(x,y));

}
