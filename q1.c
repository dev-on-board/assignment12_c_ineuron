//Write a recursive function to print first N natural numbers

#include<stdio.h>

void printnatural(int);
void printnatural(int n){
     if(n==0)
        return ;
    printnatural(n-1);
    printf("%d ",n);
 }

int main(){
    int n;
    printf("enter the no of natural number you want to print ");
    scanf("%d",&n);
    printnatural(n);
    return 0;
}