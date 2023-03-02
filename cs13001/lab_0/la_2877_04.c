#include <stdio.h>

int main()
{
int mtr , km , mtr2;

printf("Enter the Distance in Meter:\n");
scanf("%d",&mtr);

km = (mtr/1000);
mtr2 =(mtr%1000);

printf("%d In Meter is %d KM and %d Meter\n",mtr,km,mtr2);



return 0;
}
