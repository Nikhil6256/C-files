#include<stdio.h>
int main(){
    printf("Enter your marks \n");
    char grade;
    int marks ;
    scanf("%d", &marks);

    if(marks<=100 && marks>=90){
        printf("grade = 'A' ");
    }
        
        else if(marks<=90 && marks>=80){
        printf("grade = 'B' ");
        }
        
        else if(marks<=80 && marks>=70){
        printf("grade = 'C' ");
        }
        
        else if(marks<=70 && marks>=60){
        printf("grade = 'D' ");
        }
        
        else if(marks<=60 && marks>=50){
        printf("grade = 'E' ");
        }

        else {
            printf("Grade = 'F' ");
        }       
        
    
    return 0;
}