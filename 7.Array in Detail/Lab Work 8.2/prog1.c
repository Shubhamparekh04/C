/*
Q1.Write a Program to find the average of a given 2D array.
*/

#include <stdio.h>
void main()
{
    int a[3][3];
    float sum=0;

    printf("Enter 9 elements :\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum+=a[i][j];
        }
    }

    printf("Average of an Array: : %.2f",sum/9);
}