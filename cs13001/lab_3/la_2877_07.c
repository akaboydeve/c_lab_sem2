// range of unsigned int data type
#include <stdio.h>

int main()
{
    unsigned int max = 0;
    unsigned int i = 0;

    for (i = 1; i > max; i++)
    {
        if (i != 0)
        {
            max = i;
        }
    }
    printf("The maximum value of unsigned int is: %d\n", max);
    return 0;
}
