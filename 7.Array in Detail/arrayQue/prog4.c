/*
Q4.Write a C program that finds and prints the maximum value in an array of 7 integers
using a for loop.
*/

#include<stdio.h>
void main(){
    int arr[7]={98,79,46,36,65,33,41};
    int max =arr[0];

    for(int i=0;i<7;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    printf("Max value is : %d",max);
}

