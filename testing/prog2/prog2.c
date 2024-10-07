// Prog2
/*

*/
#include <stdio.h>
void main()
{
    char c, s[100], sen[100];
    // scanf("%c", &c);
    // scanf("%s", &s);
    // scanf(" %[^\n]%*c", &sen);

    scanf("%c %s %[^\n]%*c",&c,&s,&sen);
    printf("%c\n%s\n%s", c, s, sen);
}