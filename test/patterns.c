/**
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *

//1. both loop ++
#include<stdio.h>
void main(){
for(int i =1;i<=5;i++){
    for(int j = 1; j<=5 ; j++){
        printf("* ");
    }
    printf("\n");
}
}


//2. both --
#include<stdio.h>
void main(){
    for(int i = 5; i>=1;i--){
        for(int j=5;j>=1;j--){
            printf("* ");
        }
        printf("\n");
    }
}

//3. i + j -
#include<stdio.h>
void main(){
    for(int i = 1; i<=5;i++){
        for(int j = 5;j>=1;j--){
            printf(" *");
        }
        printf("\n");
    }
}

//4. i - j+
#include<stdio.h>
void main(){
    for(int i = 5; i>=1;i--){
        for(int j = 1; j<=5;j++){
            printf(" *");
        }
        printf("\n");
    }
}
 */

/**
 
 * 
 * *
 * * *
 * * * *
 * * * * *
 

 //1. both ++
#include<stdio.h>
void main(){
    for(int i = 1; i<=5 ; i++){
        for(int j = 1; j<=i ; j++){
            printf(" *");
        }
        printf("\n");
    }
}

//2. both --
#include<stdio.h>
void main(){
    for(int i = 5 ;i >=1;i--){
        for(int j = 5;j>= i; j--){
            printf(" *");
        }
        printf("\n");
    }
}

//3. i + j -

#include<stdio.h>
void main(){
    for(int i =1;i<=5;i++){
        for(int j = i; j>0 ; j--){
            printf("* ");
        }
        printf("\n");
    }
}

//4. i - , j +
#include<stdio.h>
void main(){
    for(int i=5;i>=1;i-- ){
        for(int j =i ; j<=5 ; j++){
            printf("* ");
        }
        printf("\n");
    }
}
 */


/**
 
* * * * * 
* * * * 
* * * 
* * 
*

// 1. ++
#include<stdio.h>
void main(){
    for(int i =1;i<=5;i++){
        for(int j = i; j<=5 ; j++){
            printf("* ");
        }
    printf("\n");
    }
}


//2. --
#include<stdio.h>
void main(){
    for(int i = 5 ; i>=1;i--){
        for(int j =i; j>=1 ; j--){
            printf("* ");
        }
        printf("\n");
    }
}


//3. +-
#include<stdio.h>
void main(){
    for(int i = 1 ; i<= 5; i++){
        for(int j =5 ; j>= i; j--){
            printf("* ");
        }
        printf("\n");
    }
}



//4. -+
#include<stdio.h>
void main(){
    for(int i = 5;i>=1;i--){
        for(int j= 1; j<= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}
 */

/**
         *
      * *
    * * *
  * * * *
* * * * *


//1. +++
#include<stdio.h>
void main(){
    for(int i = 1 ; i<=5;i++){
        for(int j =i ; j<=4 ; j++){
            printf("  ");
        }

        for(int k=1 ; k<=i ; k++){
            printf("* ");
        }
        printf("\n");
    }
}

//2. ---
#include<stdio.h>
void main(){
    for(int i=5;i>=1;i--){
        for(int j=i ; j>=2 ; j--){
            printf("  ");
        }

        for(int k=5 ; k>=i ;k-- ){
            printf("* ");
        }
        printf("\n");
    }
}
 */

/*
//Screen center pyramid
#include<stdio.h>
void main(){
    for(int i =1;i<=25;i++){
        for(int j =1;j<=40-i;j++){
            printf("  ");
        }

        for(int k=1;k<=i*2-1; k++){
                printf(" *");
        }

        printf("\n");
    }
}
 */