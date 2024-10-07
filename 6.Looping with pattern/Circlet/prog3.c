/*
Q.3 Develop a program that prints the given Left half triangle pattern using a nested for loop.
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
*/

#include<stdio.h>
void main(){
    for(int i=5;i>=1;i--){

        for(int k=i;k>1;k--){
          printf("  ");
        }

        for(int j=i;j<=5;j++){
          printf("%d ",j);
        }
        printf("\n");
    }
}