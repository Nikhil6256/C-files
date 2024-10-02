#include<stdio.h>

int main(){
    int x,y,z,k;
    x = 2;
    y = 3;
    z = 3;
    k = 1;
    float e = 3*x/y-z+k;

    printf("The value of c is %f", e);
    /* 3*x/y-z+k     follow left to right in *,/
        6/y-z+k
        2-z+k      follow left to right in +,-
        -1+1
        0 */
    return 0;
}