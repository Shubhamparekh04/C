/*
Q.1 Pelindrome Checker
Develop a program that checks whether a given string is a palindrome or not without using string functions.
*/

#include <stdio.h>
void main()
{
    int i = 0,f=0;
    char str[20];

    printf("Enter any string:");
    gets(str);

    while (str[i] != '\0')
    {
        i++;
    }

    for (int j = 0; j < i; j++, i--)
    {
        if (str[j] != str[i - 1])
        {
            printf("is not palindrome");
            f=1;
            break;
        }
    }

    if(f!=1){
        printf("is palindrome");
    }    
}