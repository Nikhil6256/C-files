#include<stdio.h>

int main(){
    int i=1;
    int sum =0;
    do{
        sum +=i;
        i++;
    }while(i<=10);
    printf("Addition of first ten natural no. is %d", sum);
    return 0;
}