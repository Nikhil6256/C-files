#include<stdio.h>

int calcPercentage(int science,int math,int sanskrit);
int main(){
    int math = 99;
    int science = 99;
    int sanskrit = 99;

    printf("average is %d", calcPercentage(math,science,sanskrit));
    return 0;
}
int calcPercentage(int science,int math,int sanskrit){
    return (((science+math+sanskrit)/3));
     
}
