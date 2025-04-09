#include<stdio.h>
int main ()
{
    char str;
    printf("enter letter: ");
    scanf("%c", &str);
    int n = (int)str ; 
    printf("%d",n);
    return 0;
}