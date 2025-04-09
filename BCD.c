#include<stdio.h>

int main()
{
    int del[100] , size ;
    int num , i , k , bin[4];
    printf("ENTER NO OF DIGITS\n");
    scanf("%d", &size);
    printf("ENTER NUMBER\n");
    printf("\t\tWarning:\nDo not enter 2 bit number at once\n");
    for(i=0 ; i<size ; i++)
    {
        scanf("%d", &del[i]);
    }

    for(i=0 ; i<size ; i++)
    {
        num = 0;
        k = del[i];

        num += 8 ;
        bin[0] = 1;
        if(num>k)
        {
            num -= 8;
            bin[0] = 0;
        }
        num += 4;
        bin[1] = 1;
        if(num>k)
        {
            num -= 4;
            bin[1] = 0;
        }
        num += 2;
        bin[2] = 1;
        if(num>k)
        {
            num -= 2;
            bin[2] = 0;
        }
        num += 1;
        bin[3] = 1;
        if(num>k)
        {
            num -= 1 ;
            bin[3] = 0;
        }
        
        printf(":");
        for(int j=0 ; j<4 ; j++)
        {
            printf("%d", bin[j]);
        }
    }
    return 0;
}