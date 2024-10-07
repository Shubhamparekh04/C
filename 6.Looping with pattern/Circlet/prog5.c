/*
Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.
        5
      4 5 4
    3 4 5 4 3
  3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
*/

#include<stdio.h>
void main(){
  for(int i=5;i>=1;i--){
    for(int j=1;j<i;j++){
      printf("  ");
    }

    for(int k=i;k<=5;k++){
      printf("%d ",k);
    }

    for(int l=4 ; l>=i ;l--){
      printf("%d ",l);
    }

    printf("\n");
  }
}