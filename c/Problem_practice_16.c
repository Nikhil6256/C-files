#include<stdio.h>
//97,122
int main(){
    char ch;
    printf("Enter element\n");
    scanf("%c",&ch);
    // printf("The character is %c\n", ch);
    // printf("The character is %d\n", ch);

    if(ch >= 97 && ch<=122){
        printf("This is lower case");
    }
    else {
        printf("This is not a lower case");
    }
    return 0;
}