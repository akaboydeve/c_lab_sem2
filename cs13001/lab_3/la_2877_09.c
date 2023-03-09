#include<stdio.h>
int main()
{
int x=0,y=0,z=0;
printf("Enter the length of a side of the triangle: \n");
scanf("%d",&x);
printf("Enter the length of the second side of the triangle: \n");
scanf("%d",&y);
printf("Enter the length of the third  side of the triangle: \n");
scanf("%d",&z);
if(x !=0 && y!=0 && z!=0)
{
	if(x+y>z && y+z> x && x+z >y)
	{
		if(x == y && y==z && x==z)
		{
			printf("The triangle is equilatreal.\n");
		}
		else if (x != y && y!=z && x != z)
		{
			printf("The triangle scalene. \n");
		}
		else
		{
			printf("The triangle is isoscalene.\n");
		}
	}
	else
	{
			printf("Triangle is not possible.\n");
	}

}
else
{
printf("One side of a triangle can not be zero.\n");
}
return 0;

}
