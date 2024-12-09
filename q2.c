//Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>

void printnatural(int);
void printnatural(int n){
     if(n==0)
        return ;
    printf("%d ",n);
    printnatural(n-1);
    
 }

int main(){
    int n;
    printf("enter the no of natural number you want to print ");
    scanf("%d",&n);
    printnatural(n);
    return 0;
}