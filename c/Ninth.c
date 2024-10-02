#include<stdio.h>

int main(){
    int age=65;
    if (age>60){
        printf("You can drive and you are a senior citizen");
    }
    else if(age>40){
        printf("You can drive and you are Elder");
    }
    else{
        printf("You cannot drive");
    }
    return 0;
}