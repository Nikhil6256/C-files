/* Use library function to calc. the square of a no. given by user.
Here we use <math.h> library function and in this library having pow function - pow(number,2) means number has power 2
Make sure pow contain only double data type 
which is used for square*/
#include<stdio.h>
#include<math.h>
int main(){
    int n = 4;
    printf("%f", pow(n,2));
    return 0;
}
