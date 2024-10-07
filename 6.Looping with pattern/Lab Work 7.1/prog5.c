/*
Write a Program to print the below Inverted Right Half Pyramid pattern using nested
for loop.
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
*/

#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}