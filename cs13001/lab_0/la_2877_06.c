#include <stdio.h>
int main()
{
int var1, var2, temp;
printf("Third Variable Swap\nEnter First Integer\n");
scanf("%d", &var1);
printf("Enter Second Integer\n");
scanf("%d", &var2);

printf("Before Swapping\n First variable = %d\nSecond variable = %d\n", var1, var2);
temp = var1;
var1 = var2;
var2 = temp;
printf("After Swapping\n First variable = %d\nSecond variable = %d\n", var1, var2);
return 0;
}
