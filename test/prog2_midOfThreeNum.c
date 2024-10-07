#include<stdio.h>
void main(){
    int a = 100,b=50,c=25;

    if(a>b){
        if(a<c){
            printf("\nA=%d is Middle Number",a);
        }else if(c>b){
            printf("\nC=%d is Middle Number",c);
        }else{
            printf("\nB=%d is Middle Number",b);
        }
    }else if(b<c){
        printf("\nB=%d is Middle Number",b);
    } else if(c>a){
        printf("\nC is Middle Number",c);
    } else{
        printf("\nA=%d is Middle Number",a);
    }

}