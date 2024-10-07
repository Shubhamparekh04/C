/*
Q1.Write a Program to find the length of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 3
a[1] = 7
a[2] = 1
a[3] = 8
a[4] = 6
Output:
Length of an Array: 5
*/
#include <stdio.h>
void main()
{

    int l;

    printf("Enter array size : ");
    scanf("%d", &l);

    int arr[l];

    for (int i = 0; i < l; i++)
    {
        printf("Enter array element for a[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < l; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("Array size is %d", l);
}