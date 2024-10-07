/*
// Q4. Write a Program to find Simple interest.
Write a Program to find Simple interest.
Use Formula: p x r x n
                100
Where p is the principal amount, r is the rate, and n is time in a month
*/
#include<stdio.h>
void main(){
       float p,r,n;

    printf("\nEnter p : ");
    scanf("%f",&p);

    printf("\nEnter r : ");
    scanf("%f",&r);

    printf("\nEnter n : ");
    scanf("%f",&n);

    printf("\nSimple intrest is :%.2f",(p*r*n)/100);
}