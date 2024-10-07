/*
Q1.Write a C program that initializes an array of 6 floating-point numbers and uses a for
loop to print each number in the array.
*/

#include <stdio.h>
void main()
{
    float array[6] = {3.14, 2.71, 1.41, 1.62, 0.57, 2.58};
 
    for (int i = 0; i < 6; i++)
    {
        printf("%.2f\n", array[i]);
    }
}