#include<stdio.h>

int main(){
    int sum = 0;
    for(int i=1;i<=10;i++){
        sum +=i;
    }
    printf("Addition of first 10 natural number is %d",sum);
    return 0;
}