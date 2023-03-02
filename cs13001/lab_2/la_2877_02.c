// wap to print leap year or not
#include <stdio.h>
void main()
{
     int year = 0;
     printf("Enter the year\n");
     scanf("%d", &year);
     if (year % 4 == 0)
     {
          if (year % 100 == 0 && year % 400 != 0)
          {
               printf("Year %d is not a leap year\n", year);
          }
          else
          {
               printf("Year %d is a leap year\n", year);
          }
     }
     else
     {
          printf("Year %d is not a leap year\n", year);
     }
}