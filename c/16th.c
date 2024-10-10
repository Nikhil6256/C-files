#include<stdio.h>

int main(){
    int i = 10;
    printf("The value of i is %d\n", i);

    i =15;
    printf("The value of i is %d\n", i);

    
    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", ++i);
    printf("The value of i is %d\n", i+=2);
    return 0;
}