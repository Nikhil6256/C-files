#include<stdio.h>

    int fibon(int number);
int main(){
    fibon(6);
    return 0;
}

    int fibon(int number){
        if(number == 0) {
            return 0;
        }
        if (number == 1){
            return 1;
        }
        int fibNm1 = fibon(number-1);
        int fibNm2 = fibon(number-2);
        int fibN = fibNm1+fibNm2;
        printf("fib of %d is : %d\n", number,fibN);
        return fibN;
    }