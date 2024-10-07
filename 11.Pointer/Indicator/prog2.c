/*
Q.2 Cubes Generator
Develop a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
*/

#include <stdio.h>
void main()
{
    int sz;

    printf("Enter Array size : ");
    scanf("%d", &sz);

    int a[sz][sz],*ptr;

    printf("Enter array elements:\n");
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    ptr = &a[0][0];

    printf("Cubes of all elements:");
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            printf("%d  ", *ptr * *ptr * *ptr);
            ptr++;
        }
            
    }
}