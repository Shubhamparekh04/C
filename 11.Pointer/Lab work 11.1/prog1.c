/*
Q1. Write a Program to find the square of each element of a given 1D array using a Pointer.
*/

#include <stdio.h>
void main()
{
    int sz;
    printf("Enter the array's size: ");
    scanf("%d", &sz);

    int a[sz];

    int *ptr;

    printf("Enter array's elements: \n");
    for (int i = 0; i < sz; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    ptr = &a[0];

    printf("Square of each element:\n");

    for (int i = 0; i < sz; i++)
    {
        printf("%d, ", *(ptr + i) * *(ptr + i));
    }
}