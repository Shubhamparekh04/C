// a^2+2*a*b+b^2
#include <stdio.h>
int Asquare(int a)
{
    return a * a;
}

int TwoAB(int a, int b){
    return 2*a*b;
}

int Bsquare (int b){
    return b*b;
}



int Asquare(int);
int TwoAB(int, int);
int Bsquare(int);

void main()
{
    int a, b;
    printf("Enter a & b :");
    scanf("%d %d", &a, &b);

    printf("Ans is = %d", Asquare(a) + TwoAB(a, b) + Bsquare(b));
}
