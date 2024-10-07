/*
Q1. Write a Program to find the sum of all 1D Array elements by passing an array as an
argument using UDF.
*/

#include <stdio.h>

int Calculatesum(int x[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + x[i];
    }

    return sum;
};

int Calculatesum(int[], int);

void main()
{
    int len;
    printf("Enter Array size : ");
    scanf("%d", &len);

    int a[len];

    printf("Enter Array element : \n");
    for (int i = 0; i < len; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("The sum of an Array: %d", Calculatesum(a, len));
}