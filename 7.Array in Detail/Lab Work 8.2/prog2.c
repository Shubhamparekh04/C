/*
Q2.Write a Program to perform the addition operation of two 2D arrays & store it in
another array. Keep in mind that both array sizes must be the same.
*/

#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3];

    printf("Enter 9 elements of a[3][3] :\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 9 elements of b[3][3] :\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Array c[3][3] is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}