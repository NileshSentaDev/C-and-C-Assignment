// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>
void main()
{
    int a[100], b[100], temp;

    printf("Enter array elements :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array in ascending order :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }

    printf("\nEnter array elements :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (b[i] < b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    printf("Array in discending order :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", b[i]);
    }
}