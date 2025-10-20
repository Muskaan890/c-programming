#include <stdio.h>
int main()
{

    int dec, rem, base=1, sum =0;
    printf("enter decimal number:");
    scanf("%d",&dec);
    while(dec!=0)
    {
        rem=dec%8;
        sum = sum+(rem*base);
        base=base*10;
        dec=dec/8;
    }
    printf("octal equivalent of %d is %d\n", dec,sum);
    return 0;

}
