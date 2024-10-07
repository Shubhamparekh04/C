/*
Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
loop.
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1
*/

#include<stdio.h>
void main(){
  for(int i=1;i<=5;i++){
    for(int k=2;k<=i;k++){
      printf("  ");
    }
    for(int j=i;j<=5;j++){
      printf("%d ",(j%2==0)?0:1);
    }
    printf("\n");
  }
}


