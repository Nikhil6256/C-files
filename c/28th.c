#include<stdio.h>
int main(){
    int product = 1,n=10;
    for(int i = 1; i<=10;i++){
        product *= i;
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
    return 0;
}