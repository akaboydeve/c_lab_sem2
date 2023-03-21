#include<stdio.h>

int main ()
{

int mtr , km , mtr2 ;
int *pmtr = &mtr , *pkm = &km , *pmtr2 = &mtr2;

printf("Enter The Distance in Meter\n");
scanf("%d",pmtr);

*pkm = *pmtr/1000;
*pmtr2 = *pmtr%1000;

printf("%d Km and %d Meter \n",*pkm ,*pmtr2 );



return 0;
}
