/*
Q3.Write a C program that reverses the elements of an integer array of size 4 using a for
loop and prints the reversed array.
*/

#include<stdio.h>
void main(){
    int n,arr[4]={10,20,30,40};

    for(int i=0;i<=3-i;i++){
        n=arr[i];
        arr[i]=arr[3-i];
        arr[3-i]=n;
    }

    for(int j=0;j<4;j++){
        printf("%d ",arr[j]);
    }
}


/*
#include<stdio.h>
void main(){
    int l,n;
    printf("Enter length of array : ");
    scanf("%d",&l);
    int arr[l];

    for(int i=0;i<l;i++){
        printf("\nEnter arr[%d] : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<(l-1)-j;j++){
        n=arr[j];
        arr[j]=arr[(l-1)-j];
        arr[(l-1)-j]=n;
    }

    for(int k=0;k<l;k++){
        printf("%d, ",arr[k]);
    }


}
*/