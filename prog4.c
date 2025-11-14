#include <stdio.h>

int main()
{

    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);

      
    }
    for (int i = 0; i < size; i++)
    {
          if (a[i] % 2 == 1)
        {
            printf("odd elements are %d ", a[i]);
        }
    }

    return 0;
}