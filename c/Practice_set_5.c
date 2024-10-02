//WAP to find volume of cylinder 
#include<stdio.h>

int main(){
    int r,h;
    printf("Enter The Value of Radius\n");
    scanf("%d", &r);

    printf("Enter The Value of Height\n");
    scanf("%d", &h);

    printf("Value of volume of cylinder with radius %d and height %d is %f ", r, h , 3.14*r*r*h );
    return 0;
}