/*
Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
loop.
5 4 3 2 1
  5 4 3 2
    5 4 3
      5 4
        5
*/

#include<stdio.h>
void main(){
  for(int i =1;i<=5;i++){
    for(int k=2;k<=i;k++){
      printf("  ");
    }
    for(int j=5;j>=i;j--){
      printf("%d ",j);
    }
    printf("\n");
  }
}