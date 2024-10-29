//Made By ishaan
#include <stdio.h>
int fn(int a);
int main()
{
    int height;
    scanf("%d", &height);
    for (int i = 1; i <= height; i++)
    {
        fn(i);
    }
}
int fn(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
    printf("\n");
}