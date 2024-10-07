/*
// Find factorial of given number

#include<stdio.h>
void main(){
    int i,fact=1;
    printf("Enter Number: ");
    scanf("%d",&i);

    while(i>0){
        fact = fact*i;
        i--;
    }

    printf("factorial is : %d",fact);
}
*/

/*
//Sum of given number  ex: 1234  = 1+2+3+4 = 10

#include<stdio.h>
void main(){
    int n,sum=0;

    printf("Enter number: ");
    scanf("%d",&n);

    while(n>0){
        sum = sum + (n%10);
        n= n/10;
    }
    
    printf("sum is : %d",sum);
}
*/

/*
// perfect number

#include<stdio.h>
void main(){
    int n,sum=0;

    printf("Enter number : ");
    scanf("%d",&n);

    for(int i = 1;i<n;i++){
        if(n%i == 0){
            sum=sum+i;
        }
    }

if(sum == n){
    printf("%d is perfect number",n);
}else {
    printf("%d is NOT  perfect number",n);
}
}
*/

/*
//print N number of  fibonnaci series

#include<stdio.h>
void main(){

int a=0,b=1,c,num;

printf("Enter Number: ");
scanf("%d",&num);

for(int i =1;i<=num;i++){

    printf(" %d ",a);
    c=a+b;
    a=b;
    b=c;
}
*/

/*
// palindrome numbere (reverse number == original number)

#include<stdio.h>
void main(){
    int no,rev=0,org;
    printf("Enter Number:");
    scanf("%d",&no);

    org = no;

    while(no>0){
      rev = rev*10 + no%10;
      no = no/10;
    }

printf("%d- org",org);
printf("\n%d- rev",rev);
}

*/

/*
// primenumber

#include<stdio.h>
void main(){
    int n,ct=0;
    printf("Enter No: ");
    scanf("%d",&n);

    for(int i =1;i<=n;i++){
        if(n%i == 0){
            ct++;
        }
    }

    if(ct == 2){
        printf("%d is prime number",n);
    } else{
        printf("%d is NOT  prime number",n);
    }
}
*/


// #include<stdio.h>
// void main(){
//     int n,ct=0;
//     printf("Enter No: ");
//     scanf("%d",&n);

//  for(int i=1;i<=n;i++){

//     for(int j=1;j<=i;j++){
//         if(i%j==0){
//             ct++;
//         }
//     }

//     if(ct == 2){
//         printf("%d\n",i);
//     }
//      ct = 0;
//  }
// }


/*
Strong number in range

#include<stdio.h>
void main(){
    int number,sum=0,total=0,org;
    printf("Enter Number");
    scanf("%d",&number);

    org = number;

    while(number>0){
        for(int i =1;i<=number%10;i++){
            sum = sum*i;
        }
    total = total+sum;
    sum=0;
    number = number/10;
    }

    if(total == org){
        printf("is strong");
    }else{
        printf("is weak");
    }
}
*/


/*
Perfect Number in given range

#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter number:");
    scanf("%d",&n);

for(int i=1;i<=n;i++){
    sum=0;
    for(int j=1;j<i;j++){
        if(i%j == 0){
            sum=sum+j;
        }
    }
     if(i==sum){
        printf("%d is perfect number\n",i);
    }
}

}

*/


/*
Armstrong Number


#include<stdio.h>
void main(){
    int n,sum=0,org,r;
    printf("Enter Number: ");
    scanf("%d",&n);

    org = n;

    while(n>0){
        r =n%10;
        sum = sum +r*r*r;
        n=n/10;
    }

    if(sum == org){
        printf("%d is armstrong number",org);
    }
}

 */


/*
Reverse number of given number

#include<stdio.h>
void main(){
    int n,rev=0;
    printf("Enter Number:");
    scanf("%d",&n);


    while(n>0){
        rev = rev*10 + n%10;
        n=n/10;
    }

    printf("Reverse is : %d",rev);

}
*/

/*

//Recursion

#include<stdio.h>
void main(){
    printf("Hello World\n");
    main();
}

#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

void main(){
    int n,ans;
    printf("Enter Num: ");
    scanf("%d",&n);

    ans=fact(n);
    printf("%d",ans);
}

*/


/*
//Array
#include<stdio.h>
int b[5];// Global declaration
void main(){
    int a[5];//Local declaration
    printf("%d\n",a[0]);
    printf("%d",b[0]);
}
*/

/*
// read array elements

#include<stdio.h>
void main(){
    int arr[5];

    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
}
*/

/*
//Sum of all array elements

#include<stdio.h>
void main(){
    int sum=0,arr[5]={10,20,30,40,50};

    for(int i =0;i<5;i++){
        sum =sum+arr[i];
    }
    printf("%d",sum);
}
*/

/*
//Largest element in the array

#include<stdio.h>
void main(){
    int lg,arr[5]={10,200,30,40,50};
    lg=arr[0];

    for(int i=1;i<5;i++){
        if(arr[i]>lg){
            lg=arr[i];
        }
    }

    printf("Largest element of array is : %d",lg);
}
*/


/*
Insert single element in between of array

#include<stdio.h>
void main(){
    int n,ele,loc,arr[50];
    printf("Enter size of array:\n");
    scanf("%d",&n);

    printf("Enter %d elements to be include in array\n",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter NEW element to include : ");
    scanf("%d",&ele);

    printf("\nEnter Location where you want to enter element :");
    scanf("%d",&loc);


    for(int j=n-1;j>=loc;j--){
      arr[j+1] = arr[j];
    }
    arr[loc]=ele;

    for(int k=0;k<=n;k++){
        printf("%d\n",arr[k]);
    }
}
*/


/*
Insert 2nd array into 1st array

#include<stdio.h>
void main(){
    int loc,a[6]={10,20,30,40,50,60};
    int b[3]={100,200,300};

    printf("Enter Location :");
    scanf("%d",&loc);

for(int i=5;i>=loc;i--){
    a[i+2]=a[i];
}

for(int j=0;j<=loc;j++){
    a[j]= b[j+2];
}


for(int l=0;l<=8;l++){
    printf("%d\n",a[l]);
}
}

*/


/*
#include<stdio.h>
void main(){
    int loc,a[30]={10,20,30,40,50};
    int b[3]={100,200,300};

    printf("Enter location : ");
    scanf("%d",&loc);

    for(int i=4;i>=loc;i--){
        a[i+3]=a[i];
    }

    for(int j=0;j<3;j++){
        a[j+loc]=b[j];
    }

    for(int k=0;k<8;k++){
       printf ("%d\n",a[k]);
    }
}
*/


/*
//Dynamically adding 2nd array into 1st one
#include<stdio.h>
void main(){
    int l1,l2,arr1[50],arr2[50],loc;

//Array 1
    printf("Arr1 What length you required: ");
    scanf("%d",&l1);

    printf("Enter %d values in array arr1 :\n",l1);
    for(int i=0;i<l1;i++){
        scanf("%d",&arr1[i]);
    }

//Array 2

    printf("Arr2 What length you required: ");
    scanf("%d",&l2);

    printf("Enter %d values in array arr1 :\n",l2);
    for(int j=0;j<l2;j++){
        scanf("%d",&arr2[j]);
    }


// Location
printf("Enter at what location to enter arr2 in arr1 : ");
scanf("%d",&loc);

//shifting
for(int k=l1-1;k>=loc;k--){
   arr1[k+l2] =arr1[k];
}

// inserting 2nd array into 1st one
for(int l=0;l<l2;l++){
   arr1[l+loc]= arr2[l];
}


// printing 1st array
for(int m=0;m<=(l1+l2-1);m++){
    printf("\n%d",arr1[m]);
}

}

*/




















