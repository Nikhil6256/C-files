#include<stdio.h>

int main(){
    int i = 10;
    printf("The value of i is %d\n", i);

    i =15;
    printf("The value of i is %d\n", i);

    
    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", ++i);
    printf("The value of i is %d\n", i+=2);
    
    for(float i = 1.0;i<=5;i++){
        printf("%f\n",i);
    }
    for(char ch='a'; ch<='z';ch++){
        printf("%c\n", ch);
    }
    return 0;
}