//Write a recursive function to print binary of a given decimal number

#include<stdio.h>

void d_to_b(int);

void d_to_b(int n){

    if(n>0){
        d_to_b(n/2);
        printf("%d",n%2);
        
        
    }
}
 int main(){
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    d_to_b(n);
    return 0;
 }