#include <stdio.h>

int main()
{
  int i, j, k, l, m, n, is_prime;
  printf("Enter The Number\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    m = 0;
    for (j = 2; j <= n; j++)
    {
      is_prime = 1;

      for (k = 2; k < j; k++)
      {
        if (j % k == 0)
        {
          is_prime = 0;
          m++;
          break;
        }
      }

      if ((is_prime == 1) && (m < j))
      {
        printf("%d\t", k);
      }
    }
    printf("\n");
  }

  return 0;
}
