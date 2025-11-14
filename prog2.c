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
    int rows, coloumn;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &coloumn);

    int arr[rows][coloumn];

    printf("Enter elements of array:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
              printf("arr[%d][%d]" ,i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    float avg = Average(rows, coloumn, arr);

    printf("\n Average is: %.2f\n", avg);

    return 0;
}