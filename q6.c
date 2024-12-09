//Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>

void printeven(int);

void printeven(int n){

    if(n<0)
    return ;
    printf("%d ",2*n);
    printeven(n-1);
    
}

int main(){

    int n;
    printf("enter a num :");
    scanf("%d",&n);
    printeven(n-1);
    return 0;
}