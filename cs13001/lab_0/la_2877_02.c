#include <stdio.h>

int main()
{
float hight , base , area;

printf("Enter the Hight of the Triangle\n");
scanf("%f",&hight);

printf("Enter the Base of The Triangle\n");
scanf("%f",&base);

area= (hight*base)/2;

printf("The Area of the triangle of Hight %f and Base %f is %f \n",hight,base, area);

return 0;
}
