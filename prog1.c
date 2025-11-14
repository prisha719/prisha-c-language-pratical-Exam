#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5;
    float avg;

    printf("Enter marks of sub1:");
    scanf("%d", &s1);

    printf("Enter marks of sub2:");
    scanf("%d", &s2);

    printf("Enter marks of sub3:");
    scanf("%d", &s3);

    printf("Enter marks of sub4:");
    scanf("%d", &s4);

    printf("Enter marks of sub5:");
    scanf("%d", &s5);

    avg = (s1 + s2 + s3 + s4 + s5) / 5;

    printf("\nAverage is : %.2f\n",avg);

    if (avg >= 90)
    {
        printf("Grade: A");
    }

    else if (avg >= 80)
    {
        printf("Grade: B");
    }

    else if (avg >= 70)
    {
        printf("Grade: C");
    }

    else if (avg >= 60)
    {
        printf("Grade: D");
    }

    else if (avg >= 50)
    {
        printf("Grade: E");
    }

    else
    {
        printf("Grade:(Fail)");
    }

   return 0;
}
