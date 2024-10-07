#include <stdio.h>
void main()
{
    FILE *ptr = fopen("test.txt", "a");
    char  userTxt[100];
    // char cntr[1000], userTxt[100];
    if (ptr == NULL)
    {
        printf("File is not available...!");
    }
    else
    {
        // while (fgets(cntr, 5, ptr) != NULL)
        // {
        //     printf("%s", cntr);
        // }

        // fclose(ptr);
        // ptr = fopen("test.txt", "a");

        printf("\nEnter a string to add to the file: ");
        fgets(userTxt,sizeof(userTxt), stdin); 

        
        fputs(userTxt, ptr);
        printf("Added successfully...!!!");

        
        fclose(ptr);
    }
}
