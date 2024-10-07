/*
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *arr, capacity = 5;

    arr = (int *)calloc(capacity, sizeof(int));

    printf("Address %u\n", &arr);

    for (int i = 0; i < capacity; i++)
    {
        printf("Enter %d value :", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < capacity; i++)
    {
        printf("Value %d = %d\n", i + 1, arr[i]);
    }

    capacity++;

    arr = (int *)realloc(arr, capacity * sizeof(int));
    printf("\n///////////////////////////////////\n");
    for (int i = 0; i < capacity; i++)
    {
        printf("Enter %d value :", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < capacity; i++)
    {
        printf("Value %d = %d\n", i + 1, arr[i]);
    }

    free(arr);

    printf("\n///////////////////////////////////\n");
    printf("Address %u", &arr);
}
*/

/*
#include<stdio.h>
void main(){
    int a,b,c=0;

    for(int i=1;i<=5;i++){
        a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            b=a;
            a=c+a;
        }
        c=b;
        printf("\n");
    }
}
*/

/*
* * * * *
*       *
* * * * *
*       *
*       *


#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || i==3 || j== 1 || j==5){
                printf("* ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
*/

/*
A
B A
C B A
D C B A
E D C B A

#include<stdio.h>
void main(){
    char c='A';
    for(int i=0;i<=4;i++){
        for (int j=i;j>=0;j--){
            printf("%c ",c+j);
        }
        printf("\n");
    }
}
*/

/*
Write a Program to print the below pattern using nested for loop.
1 2 3 4 5 4 3 2 1
1 2 3 4   4 3 2 1
1 2 3       3 2 1
1 2           2 1
1               1
*/

// #include <stdio.h>
// void main()
// {
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }

//         for (int k = 5; k > i; k--)
//         {
//             printf("_  _ ");
//         }

//         for (int m=i;m>=4; m--)
//         {
//             for (int l = 4; l >=1; l--)
//             {
//                 printf("%d ", l);
//             }
//         }

//         printf("\n");

//     }
// }

// #include <stdio.h>

// int main() {
//     int n = 5; // Number of rows

//     for (int i = 0; i < n; i++) {
//         // Print the left part of the pattern
//         for (int j = 1; j <= n - i; j++) {
//             printf("%d ", j);
//         }

//         // Print the spaces in the middle
//         for (int j = 0; j < 2 * i; j++) {
//             printf("  ");
//         }

//         // Print the right part of the pattern
//         for (int j = n - i; j >= 1; j--) {
//             printf("%d ", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }

/*

 * * *
*
 * * *
      *
 * * *




#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<4;j++){
            if(i==1 || i == 3|| i==5){
                printf(" *");
            } else if(i==2 && j==1){
                printf("*");
            } else if(i==4 && j==3){
                printf("    *");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

*/

// malloc()

// #include<stdio.h>
// #include<stdlib.h>

// struct emp{
//     int eno;
//     char ename[20];
//     float esal;
// };

// void main(){
//     struct emp* e;

//    e  = (struct emp*) malloc(sizeof(struct emp));

//     printf("Enter eno , ename & esal :");
//     scanf("%d %s %f",&e->eno,e->ename,&e->esal);

//     printf("Eno : %d\nEname : %s\nEsal : %.2f",e->eno,e->ename,e->esal);

// }

/*
//foprn()

#include<stdio.h>
void main(){
    FILE* fp;

    fp = fopen("./test.txt","r");

    // if(fp==NULL){
    //     printf("File not opened");
    // }else{
    //     printf("File opened successfully..!");
    // }

    int ch;
   while ((ch = fgetc(fp))!=EOF){
        printf("%c",ch);
   }
}
*/

// #include<stdio.h>
// void main(){
//     typedef int Array[5];
//     Array x = {10,20,30,40,50};

//     for(int i=0;i<5;i++){
//         printf("%d\n",x[i]);
//     }
// }

// typedef premetive
/**

#include<stdio.h>
void main(){
    typedef int array[3];

    array x={10,20,30};

    for(int i=0;i<3;i++){

        printf("%d ",x[i]);
    }
}
 */

/*
// typedef user defined data type
typedef char *string;
string read(void);
#include <stdio.h>
void main()
{
    string name;
    name = read();
    printf("Welcome, %s", name);
}

string read()
{
    string name;
    printf("Enter your name : ");
    gets(name);
    return name;
}
*/

// typedef node
/*
struct node{
    int data;
    struct node* link;
};


typedef struct node NODE;
typedef struct node* PTR;
#include<stdio.h>
void main(){
    PTR root;
root  = (PTR) malloc(sizeof(NODE));
}
*/


// Storage class 
/*
1. auto (default): can't declare global
    deafult value: garbage;
    scope : block/method
    life span: until block of code executes

2. static:
    default value: 0;
    scope : block/method
    life span: until entire program executes

3. extern:
    default value: 0;
    scope : kind of global
    life span: until program completed it's execution

4. register (stores value in register)
    default value: ;
    scope : block/method
    life span: 

*/

/*
//auto

#include<stdio.h>
void main(){
auto int a; // int a; (both same as default is auto)
    a=10;
    printf("%d ",a);
}
*/

/*
//static

#include<stdio.h>
void main(){

static int a;
printf("%d",a);
}
*/

// #include<stdio.h>
// void main(){
//     {
//     extern int i;
//     }
//     i=10;
//     printf("%d ",i);


// }


/*
#include<stdio.h>
void main(){
    int a[5];
    scanf("%d",&a[0]);

    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}
*/
































