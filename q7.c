//Write a recursive function to print squares of first N natural numbers

#include<stdio.h>

void square(int);

void square(int n){

    if(n==0)
    return;
    square(n-1);
    printf("%d ",n*n);
    
}

int main(){

    int n;
    printf("enter a num :");
    scanf("%d",&n);
    square(n);
    return 0;
}