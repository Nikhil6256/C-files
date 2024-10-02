/*Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height.

#include<stdio.h>

int main(){
    int r=4;
    printf("The area of a circle with radius %d is %f", r, 3.14*r*r);
    return 0;
}*/


#include<stdio.h>

int main(){
    int r=5,h=8;
    printf("The Volume of the cylinder with radius %d and height %d is %f ", r,h, 3.14*r*r*h);
    return 0;
}