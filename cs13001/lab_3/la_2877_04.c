// decimal to octal
#include <stdio.h>

int main()
{
    int num, bin = 0, rem = 0, place = 1;

    printf("Enter a decimal number\n");
    scanf("%d", &num);

    printf("\nBinary equivalent of %d is ", num);
    while(num)
    {
        rem   = num % 8;
        num   = num / 8;
        bin   = bin + (rem * place);
        place = place * 10;
    }
    printf("%d\n", bin);

    return 0;
}
