//Write a C program to calculate area of a rectangle: 

#include<stdio.h>

int main(){
    int length,breadth;
    // scanf("%d %d", &length, &breadth);
    // printf("The Area of rectangle is %d", length*breadth);
    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);  

    printf("The Area of rectangle is %d", length*breadth);  
    return 0;
}