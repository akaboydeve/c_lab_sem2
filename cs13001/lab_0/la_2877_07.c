#include<stdio.h>
int main()
{
printf ("Area of circle is πr^2\nParameter of circle is 2πr\nwhere r is radius of circle\n");
float r, a, p;
printf("Enter the radius of circle:\n");
scanf("%f", &r);
a=22/7*r*r;
printf("The area is %f\n", a);
 p=2*a*22/7;
printf("The parameter is %f \n", p);
return 0;
}
