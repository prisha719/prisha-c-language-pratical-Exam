#include<stdio.h>
// Write a C program to find even elements from an 1D array using Pointer.
int main()
{

    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int a[size];
    int *p[size];

    for (int i = 0; i < size; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);

        p[i] = &a[i];
    }

    for (int i = 0; i < size; i++)
    {
        if(*p[i] % 2 == 0)
        {
            printf("Even number are: %d ",*p[i]);
        }
        
    }

    return 0;
} 