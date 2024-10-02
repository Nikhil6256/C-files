#include<stdio.h>

int main(){
    int Income;
    float tax;
    printf("Enter Your Salary\n");
    scanf("%d", &Income);
    if(Income <= 250000){
    tax = 0; 
    }
    else if(Income>250000 && Income<=500000){
        tax = 0.05 * (Income - 250000);
    }

    else if(Income>500000 && Income<=1000000){
    tax = 0.05 * (500000 - 250000) + 0.2 * (Income - 500000);
    }

    else{
       tax = 0.05*(500000-250000) + 0.2 * (1000000-500000) + 0.3*(Income-1000000);
    }   
    printf("The total tax you need to pay is %.2f", tax);
    return 0;
}