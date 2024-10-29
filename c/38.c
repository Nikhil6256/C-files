#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char ch;
    printf("Enter i if you are indian & f for french\n");

    scanf("%c",&ch);

    if(ch=='i'){
        namaste();
    }
    if(ch=='f'){
        bonjour();
    }

    return 0;
}

void namaste(){
    printf("Namaste");
}
void bonjour(){
    printf("Bonjour");
}