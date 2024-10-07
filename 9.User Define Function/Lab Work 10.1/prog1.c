/*
Q1.Write a Program to find the cube of a given number using UDF.
For example,
*/
#include <stdio.h>

void cube()
{
    int n;
    printf("Enter any Number :");
    scanf("%d", &n);

    printf("Cube is: %d", n * n * n);
};

void cube();

void main()
{

    cube();
}