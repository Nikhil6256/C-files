#include<stdio.h>

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int sum = 0;
    for(int j=n;j>=1;j--){
        sum += j;
        printf("%d\n", j);
    }
    printf("sum is %d\n",sum);
    return 0;
}