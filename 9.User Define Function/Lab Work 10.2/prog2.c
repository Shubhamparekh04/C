/*
Q2. Write a Program to find the length of the String by passing a string as an argument
using UDF. Do not use any string function.
*/

#include <stdio.h>

int strlen(char x[])
{
    int i = 0;
    while (x[i] != '\0')
    {
        i++;
    }
    return i;
}

int strlen(char[]);
void main()
{
    char str[20];

    printf("Enter any string: ");
    gets(str);

    printf("Length is: %d", strlen(str));
}