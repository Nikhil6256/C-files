#include<stdio.h>

int main(){
    int a,b,c,d;
    
    printf("value of a is\n");
    scanf("%d",&a);

    printf("value of b is\n");
    scanf("%d",&b);

    printf("value of c is\n");
    scanf("%d",&c);

    printf("value of d is\n");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("The greatest of all is %d",a);
    }

    else if(b>a && b>c && b>d){
        printf("The greatest of all is %d",b);
    }
    else if(c>b && c>c && c>d){
        printf("The greatest of all is %d",c);
    }
    else if(d>a && d>b && d>c){
        printf("the greatest of all is %d",d);
    }
    
    return 0;
}