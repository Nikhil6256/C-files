#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char ch;
    printf("Enter i if you are indian & f for french\n");

    scanf("%c",&ch);

    namaste();                //indirect function calling

    return 0;
}

void namaste(){
    printf("Namaste\n");
    bonjour();
}
void bonjour(){
    printf("Bonjour\n");
}