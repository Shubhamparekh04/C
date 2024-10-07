/*
Write a Program to print the below Full Pyramid pattern using nested for loop.
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/

#include<stdio.h>
void main(){
  for(int i=1;i<=5;i++){
    for(int j=5;j>i;j--){
      printf("  ");
    }

    for(int k=1;k<=i;k++){
      printf("%d ",k);
    }

    for(int l=i;l>1;l--){
      printf("%d ",l-1);
    }
    printf("\n");
  }
}