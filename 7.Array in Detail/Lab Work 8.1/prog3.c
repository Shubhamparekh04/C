/*
Q3.Write a Program to perform the addition operation of two 1D arrays & store it in
another array. Keep in mind that both array sizes must be the same.
For example,
Input:
Enter array size: 5
Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 1
b[3] = 7
b[4] = 3
Output:
Array C is: 8, 7, 10, 12, 5
*/

#include <stdio.h>
void main()
{
    int l;
    printf("Enter Length : ");
    scanf("%d", &l);

    int a[l], b[l], c[l];

    printf("Enter array A's elements:\n");
    for (int i = 0; i < l; i++)
    {
        scanf("%d, ", &a[i]);
    }
    printf("\nEnter array B's elements:\n");
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
    }

    printf("\nArray C is:");
    for (int i = 0; i < l; i++)
    {   
        printf(" %d, ",c[i]);
    }
}