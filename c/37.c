#include<stdio.h>
//declaration prototype
void printHello();
void printGoodbye();

int main(){
    printHello();  //function call
    printGoodbye();
    printHello();
    return 0;
}

//function definition

void printHello(){
    printf("Hello\n");
}

void printGoodbye(){
    printf("Goodbye\n");
}