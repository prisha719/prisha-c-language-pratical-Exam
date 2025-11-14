#include <stdio.h>

float findAverage(int rows, int cols, int arr[rows][cols])
{
    int sum = 0;
    int total = rows * cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
          
            sum += arr[i][j];
        }
    }

    return (float)sum / total;
}

int main()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the 2D array:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
              printf("arr[%d][%d]" ,i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    float avg = findAverage(rows, cols, arr);

    printf("\nAverage of all elements: %.2f\n", avg);

    return 0;
}