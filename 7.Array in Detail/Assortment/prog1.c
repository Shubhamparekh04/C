/*
Q.1 Negative Elements in 1D Array
Develop a program that finds all the negative elements from a given 1D array.
*/

#include <stdio.h>
void main()
{
    int sz;
    printf("Enter the array's size: ");
    scanf("%d", &sz);

    int a[sz];

    printf("\nEnter array's elements:\n");

    for (int i = 0; i < sz; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("\nOutput:\nNegative elements from an Array: ");

    for(int i=0;i<sz;i++){
        if(a[i]<0){
            printf("%d, ",a[i]);
        }
    }

    printf("\n\n");
}