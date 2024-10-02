#include<stdio.h>

int main(){
    int a=1,b=1;
    printf("The value of A and B is %d\n", a&&b);
    printf("The value of A or B is %d\n", a||b);
    printf("The value of not(A) is %d\n", !a);
  
    if(a && b){
        printf("both are true\n");
    }
    return 0;
}