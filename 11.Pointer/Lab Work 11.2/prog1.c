/*
Q1.Write a Program to find the square of each elements of a 1D array and print in reverse order using a Chain of Pointers.
*/

#include <stdio.h>
void main()
{
    int sz;
    printf("Enter array's size: ");
    scanf("%d", &sz);
    int a[sz], *ptr[sz];

    printf("\nEnter array elements:\n");
    for (int i = 0; i < sz; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        ptr[(sz - 1) - i] = &a[i];
    }

    printf("\nReversed array elements:\n");

    for (int i = 0; i < sz; i++)
    {
        printf("%d\n", (*ptr[i]) * (*ptr[i]));
    }
}