//Q2.Write a Program to find if a given number is neutral or not using a ladder if else.

#include<stdio.h>
void main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    if (n>0)
    {
        printf("This number is Positive");
    } else{
        if(n<0){
            printf("This number is Negative");
        }else{
            printf("This number is Neutral");
        }
    }
    
}