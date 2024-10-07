#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{

    int max;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                max = a;
            }
            else
            {
                max = d;
            }
        }
        else if (c > d)
        {
            max = c;
        }
        else
        {
            max = d;
        }
    }
    else if (b > c)

        if (b > d)
        {
            max = b;
        }
        else
        {
            max = d;
        }

    else if (c > d)
    {
        max = c;
    }
    else
    {
        max = d;
    }
    return max;
}

void main()
{
    printf("%d", max_of_four(3, 4, 6, 5));
}