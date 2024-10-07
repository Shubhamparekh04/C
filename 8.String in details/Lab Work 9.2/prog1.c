/*
Q1.Write a Program to check if a given password is strong or not by satisfying the below criteria:

- Password must be at least 6 characters.
- Password must contain at least one letter, one digit & one special symbol.

*/

#include <stdio.h>
#include <string.h>
void main()
{
    int i = 0, ch = 0, num = 0, sc = 0, l;
    char str[20];

    printf("Create your password: ");
    gets(str);

    l = strlen(str);

    if (l >= 6)
    {
        while (str[i] != '\0')
        {

            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                ch++;
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                num++;
            }
            else if ((str[i] >= '!' && str[i] <= '/') || (str[i] == '@'))
            {
                sc++;
            }

            i++;
        }
        printf("Your password is %s", (ch != 0 && num != 0 && sc != 0) ? "Strong" : "Not Strong");
    }
    else
    {
        printf("Password must be at least 6 characters");
    }
}
