/*
Q.1 File Handling Develop a program that writes even & odd numbers from 50 to 70 into two separate files.
*/
#include <stdio.h>
void main()
{
    FILE *ptre, *ptro;

    ptre = fopen("even_file.txt", "a");
    ptro = fopen("odd_file.txt", "a");

    if (ptre == NULL || ptro == NULL)
    {
        printf("File is not accisible...!");
    }
    else
    {
        for (int i = 50; i <= 70; i++)
        {
            if (i % 2 == 0)
            {
                fprintf(ptre, "%d\n", i);
            }
            else
            {
                fprintf(ptro, "%d\n", i);
            }
        }

        printf("file ready...");
    }

    fclose(ptre);
    fclose(ptro);
}