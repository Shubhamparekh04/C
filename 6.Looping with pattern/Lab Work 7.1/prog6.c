/*
Write a Program to print the below Inverted Right Half Pyramid pattern using nested
for loop.
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1
*/

#include<stdio.h>
void main(){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j%2==0?0:1);
        }
        printf("\n");
    }
}
