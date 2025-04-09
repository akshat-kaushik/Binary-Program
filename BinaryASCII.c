#include<stdio.h>
int main ()
{
    char str[100];
    printf("ENTER LETTER\n");
    scanf("%s",str);//if you use fgets it will also return a control code value ASCII Code 10
    int num , i , j , bin[7];
    for(j=0;str[j]!='\0';j++)
    {
        i = (int)str[j];
        num = 0;

        num = num+64 ;
        bin[0] = 1;
        if (num>i)
        {
            num = num-64;
            bin[0] = 0;
        }
        num = num+32;
        bin[1] = 1;
        if (num>i)
        {
            num = num-32;
            bin[1] = 0;
        }
        num = num+16;
        bin[2] = 1;
        if (num>i)
        {
            num = num-16;
            bin[2] = 0;
        }
        num = num+8;
        bin[3] = 1;
        if (num>i)
        {
            num = num-8;
            bin[3] = 0;
        }
        num = num+4;
        bin[4] = 1;
        if (num>i)
        {
            num = num-4;
            bin[4] = 0;
        }
        num = num+2;
        bin[5] = 1;
        if (num>i)
        {
            num = num-2;
            bin[5] = 0;
        }
        num = num+1;
        bin[6] = 1;
        if (num>i)
        {
            num = num-1;
            bin[6] = 0;
        }

        printf("%c::",str[j]);
        for(int k=0 ; k<7 ; k++)
        {
            printf(":%d",bin[k]);
        }
        printf("\n");
    }
    return 0;
}