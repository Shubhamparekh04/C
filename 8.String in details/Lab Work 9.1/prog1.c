/*
Q1.Write a Program to convert the given string in uppercase without using any string function.
*/

#include <stdio.h>
void main()
{
    int ct = 0;
    char str[20];
    printf("Enter string :");
    gets(str);

    while (str[ct] != '\0')
    {
        ct++;
    }


    for (int i = 0; i < ct; i++)
    {
        str[i] = (str[i] >= 97 && str[i] <= 122) ? str[i]-32 : str[i];
    }


    printf("%s",str);
}