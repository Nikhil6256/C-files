#include<stdio.h>

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=n;i>=1;i--){               //in reverse sum is equal to sum
        sum += i;                        //e.g 1+2+3=3+2+1
        printf("%d\n",i);
    }
    printf("sum is %d\n",sum);
    return 0;
}