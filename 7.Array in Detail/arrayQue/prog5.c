/*
Q5.Write a C program that counts the number of even and odd numbers in an array of 8
integers using a for loop.
*/

#include<stdio.h>
void main(){
    int arr[8]={1,3,5,12,28,46,64,82},ct=0;

    for(int i=0;i<8;i++){
        if(arr[i]%2==0){
            ct++;
        }
    }
    printf("Even number count is : %d\nOdd number count is : %d",ct,8-ct);
}