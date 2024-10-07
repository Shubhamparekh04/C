/*
Write a Program to print the below Right Half Pyramid pattern using nested for loop.
A
B A
C B A
D C B A
E D C B A
*/

#include <stdio.h>
void main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
}