/*
Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
loop.
5 4 3 2 1
  4 3 2 1
    3 2 1
      2 1
        1
*/

#include<stdio.h>
void main(){
  for(int i=5;i>=1;i--){
    for(int k=4;k>=i;k--){
      printf("  ");
    }
    for(int j=i;j>=1;j--){
      printf("%d ",j);
    }
    printf("\n");
  }
}