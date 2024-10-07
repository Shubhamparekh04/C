/*
Write a Program to swap two variables using Pointers.
*/

#include <stdio.h>
void main()
{
    int x, y;
    int *temp1, *temp2, temp;

    printf("Enter value of X : ");
    scanf("%d", &x);

    printf("Enter value of Y : ");
    scanf("%d", &y);

    printf("\n\nBefore swapping:\nX : %d\nY : %d", x, y);

    temp1 = &x;
    temp2 = &y;

    temp = *temp1;
    *temp1 = *temp2;
    *temp2 = temp;

    printf("\n\nAfter swapping:\nX : %d\nY : %d\n", x, y);
}