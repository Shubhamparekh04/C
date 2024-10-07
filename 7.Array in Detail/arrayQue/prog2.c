/*
Q2.Write a C program that calculates the sum of all elements in an integer array of 5
elements using a for loop.
*/

#include<stdio.h>
void main(){
    int arr[5]={10,20,30,40,50},sum=0;

    for(int i=0;i<5;i++){
        sum+=arr[i];
    }

    printf("Sum is : %d",sum);
}