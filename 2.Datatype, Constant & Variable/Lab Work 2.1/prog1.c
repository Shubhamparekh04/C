/*
//Q1. Write a Program to perform all arithmetic operators such as +, -, *, / and %
*/

#include<stdio.h>
void main(){
    int firstVal = 12;
    int secondVal = 6;

    printf("\n%d + %d : %d\n",firstVal,secondVal,(firstVal+secondVal));
    printf("%d - %d  : %d\n",firstVal,secondVal,(firstVal-secondVal));
    printf("%d * %d  : %d\n",firstVal,secondVal,(firstVal*secondVal));
    printf("%d / %d  : %d\n",firstVal,secondVal,(firstVal/secondVal));
    printf("%d %%  %d is : %d\n\n",firstVal,secondVal,(firstVal % secondVal));
}




