#include<stdio.h>

int main(){
    int n ,product = 1;
    printf("Enter the value\n");
    scanf("%d",&n);
    for(int i = 10;i>=1;i--){
        product *= i;
        printf("%d X %d = %d\n", n,i,n*i);
    }
    return 0;
}