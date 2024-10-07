/*
Q.1 Length Finder
Develop a program that finds the length of a string using a pointer.
*/

#include <stdio.h>
void main()
{
    char str[20], *ptr;
    int ct = 0;

    printf("Enter any string : ");
    scanf(" %[^\n]%*c", str);

    ptr = &str[0];

    while (*ptr!= '\0')
    {
        ptr++;
        ct++;
    }

    printf("Length is =  %d", ct);
}