//Greatest of 5 number;

#include<stdio.h>
void main(){
    int a,b,c,d,e;
    printf("Enter 5 numbers : \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
                    //a is greater
                    printf("\nA = %d is greater",a);
                }else{
                    //e is greater
                     printf("\nE = %d is greater",e);
                }
            }else {
                if(d>e){
                    //d is greater
                    printf("\nD = %d is greater",d);
                }else{
                    //e is greater
                    printf("\nE = %d is greater",e);
                }
            }
        }else{
            if(c>d){
                if(c>e){
                    //c is greater
                    printf("\nC = %d is greater",c);
                }else{
                    //e is greater
                    printf("\nE = %d is greater",e);
                }
            }else{
                if(d>e){
                    //d is greatest
                    printf("\nD = %d is greater",d);
                }else{
                    //e is greatest
                    printf("\nE = %d is greater",e);
                }
            }
        }
    }else{
        if(b>c){
            if(b>d){
                if(b>e){
                    //b is greatest
                    printf("\nB = %d is greater",b);
                }else{
                    //e is greatest
                    printf("\nE = %d is greater",e);
                }
            }else{
                if(d>e){
                    //d is greatest
                    printf("\nD = %d is greater",d);
                }else{
                    //e is greatest
                    printf("\nE = %d is greater",e);
                }
            }
        }else{
            if(c>d){
                if(c>e){
                    //c is greatest
                    printf("\nC = %d is greater",c);
                }else{
                    //e is greatest
                    printf("\nE = %d is greater",e);
                }
            }else{
                if(d>e){
                    //d is greatest
                    printf("\nD = %d is greater",d);
                }else{
                    //e is greatest
                    printf("\nE = %d is greater",e);
                }
            }
        }
    }
}