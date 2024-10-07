#include<stdio.h>
void main(){
for(int i=5;i>=1;i--){

for(int j=i;j<5;j++){
    printf(" ");
}

for(int k=1;k<=i;k++){
    printf("* ");
}
printf("\n");
}

for(int l=2;l<=5;l++){
    for(int m=l;m<5;m++){
        printf(" ");
    }

    for(int n=1;n<=l;n++){
        printf("* ");
    }

printf("\n");
}
}