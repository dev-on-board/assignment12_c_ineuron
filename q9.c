//Write a recursive function to print octal of a given decimal number
#include<stdio.h>

void d_to_o(int);

void d_to_o(int n){

    if(n>0){
        d_to_o(n/8);
        printf("%d",n%8);
        
        
    }
}
 int main(){
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    d_to_o(n);
    return 0;
 }