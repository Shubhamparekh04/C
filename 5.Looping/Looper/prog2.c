/*
Q.2 Digit Counter
Develop a Program to count the total number of digits in a number.
*/

#include<stdio.h>
void main(){
    int n,i=0;
    printf("Enter number :");
    scanf("%d",&n);
    
    while(n>0){
        n=n/10;
        i++;
    }

    printf("Total number of digits:  %d",i);
}