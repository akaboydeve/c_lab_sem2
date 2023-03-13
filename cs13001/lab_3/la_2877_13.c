#include <stdio.h>

int main()
{
  int i, j, k, n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    k = 2;

    for (j = 1; j <= i; j++)
    {
      while (1)
      {
        int is_prime = 1;
        for (int l = 2; l < k; l++)
        {
          if (k % l == 0)
          {
            is_prime = 0;
            break;
          }
        }
        if (is_prime)
        {
          printf("%d\t", k);
          break;
        }
        k++;
      }
      k++;
    }
    printf("\n");
  }

  return 0;
}
