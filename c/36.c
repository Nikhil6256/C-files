#include<stdio.h>
//Function Prototype
void printHello();
int main(){
    printHello();  //Function Call
    printHello();
    printHello();
    return 0;
}

//Function definition
void printHello(){
    printf("Hello\n");
    printf("My name is Nikhil\n");
}