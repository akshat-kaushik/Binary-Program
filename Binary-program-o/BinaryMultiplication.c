#include<stdio.h>
#include<math.h>

int decimal(int a[]);
void binary(int e);

int main ()
{
    int arr[7] ;
    int brr[7] ;
    printf("ENTER MULTIPLICANT IN BINARY\n");
    for(int i=0 ; i<7 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER MULTIPLER IN BINARY\n");
    for(int j=0 ; j<7 ; j++)
    {
        scanf("%d",&brr[j]);
    }
    int c = decimal(arr);
    int d =decimal(brr);
    int k = c*d;
    binary(k);
    return 0;
}

int decimal (int a[])
{
    int i , garbage[] = {0,0,0,0,0,0,0};
    for (i=0 ; i<7 ; i++)
    {
        switch (i)
        {
            case 0:
            {
                if(a[i]==1)
                {
                    garbage[i] = pow(2,6);
                    break;
                }
            }
            case 1:
            {
                if(a[i]==1)
                {
                    garbage[i] = pow(2,5);
                    break;
                }
            }
            case 2:
            {
                if(a[i]==1)
                {
                    garbage[i] = pow(2,4);
                    break;
                }
            }
            case 3:
            {
                if(a[i]==1)
                {
                    garbage[i] = pow(2,3);
                    break;
                }
            }
            case 4:
            {
                if(a[i]==1)
                {
                    garbage[i] = pow(2,2);
                    break;
                }
            }
            case 5:
            {
                if (a[i]==1)
                {
                    garbage[i] = pow(2,1);
                    break;
                }
            }
            case 6:
            {
                if(a[i]==1)
                {
                    garbage[i] = pow(2,0);
                    break;
                }
            }
            default:
            {
            }
        }
    }
    int sum = 0;
    for (int j=0 ; j<7 ; j++)
    {
        sum += garbage[j];
    }
    printf("%d\n", sum);
    return sum;
}

void binary(int e)
{
    int str = e;
    int num , i , j , bin[14];

        i = str;
        num = 0;

        num = num + 8192;
        bin[0] = 1;
        if (num>i)
        {
            num = num-8192;
            bin[0] = 0;
        }
        num = num+4096;
        bin[1] = 1 ;
        if (num>i)
        {
            num = num-4096;
            bin[1] = 0;
        }
        num = num+2048;
        bin[2] = 1;
        if(num>i)
        {
            num = num-2048;
            bin[2] = 0;
        }
        num = num+1024;
        bin[3] = 1;
        if(num>i)
        {
            num = num-1024;
            bin[3] = 0;
        }
        num = num+512;
        bin[4] = 1;
        if(num>i)
        {
            num = num-512;
            bin[4] = 0;
        }
        num = num+256;
        bin[5] = 1;
        if (num>i)
        {
            num = num-256;
            bin[5] = 0;
        }
        num = num+128;
        bin[6] = 1;
        if(num>i)
        {
            num = num-128;
            bin[6] = 0;
        }
        num = num+64 ;
        bin[7] = 1;
        if (num>i)
        {
            num = num-64;
            bin[7] = 0;
        }
        num = num+32;
        bin[8] = 1;
        if (num>i)
        {
            num = num-32;
            bin[8] = 0;
        }
        num = num+16;
        bin[9] = 1;
        if (num>i)
        {
            num = num-16;
            bin[9] = 0;
        }
        num = num+8;
        bin[10] = 1;
        if (num>i)
        {
            num = num-8;
            bin[10] = 0;
        }
        num = num+4;
        bin[11] = 1;
        if (num>i)
        {
            num = num-4;
            bin[11] = 0;
        }
        num = num+2;
        bin[12] = 1;
        if (num>i)
        {
            num = num-2;
            bin[12] = 0;
        }
        num = num+1;
        bin[13] = 1;
        if (num>i)
        {
            num = num-1;
            bin[13] = 0;
        }
        for(int k=0 ; k<14 ; k++)
        {
            printf(":%d",bin[k]);
        }
        printf("\n");
}