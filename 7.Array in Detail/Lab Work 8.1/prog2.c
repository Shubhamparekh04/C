/*
Q2.Write a Program to find the average of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 12
a[1] = 42
a[2] = 18
a[3] = 50
a[4] = 26
Output:
Average of an Array: 29.6
*/

#include <stdio.h>
void main()
{

    int l;
    float sum;

    printf("Enter array size : ");
    scanf("%d", &l);

    float arr[l];

    for (int i = 0; i < l; i++)
    {
        printf("Enter array element for a[%d] : ", i);
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < l; i++)
    {
        sum = sum + arr[i];
    }

    printf("Average of an Array: %.1f", sum / l);
}