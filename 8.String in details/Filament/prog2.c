/*
Q.2 Frequency Counter
Extend the program to count the frequency of each character in a given string.

Input: Enter any string: development

Output:
Frequency of each letter:
d => 1
e => 3
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char str[20], c;
    int ct, i;

    printf("Enter any string: ");
    gets(str);

    printf("Frequency of each letter: \n");

    for (c = 'a'; c <= 'z'; c++)
    {
        ct = 0;
        i = 0;
        while (str[i] != '\0')
        {

            if (c == str[i])
            {
                ct++;
            }

            i++;
        }

        if (ct != 0)
        {
            printf("%c=>%d\n", c, ct);
        }
    }
}