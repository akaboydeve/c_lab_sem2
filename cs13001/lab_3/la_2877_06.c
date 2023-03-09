//range of int data type
#include <stdio.h>

int main() {
    int  max = 0;
    int i = 0;

for (i=1;i> max; i++)
    {
	if(i!=0)
	{
        max = i;
	}
    }
    printf("The maximum value of int is: %d\n", max);
    return 0;
}
