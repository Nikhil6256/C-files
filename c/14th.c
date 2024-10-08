#include<stdio.h>

int main(){
    int i=0;
    while(i<11){                          // for infinite loop then always condition should be true         therefore try while(0<1)                     
        printf("The 10 natural number are %d\n", i);
        i++;                               // if want same no. repeat continuously than remove i++;
    }
    return 0;
}