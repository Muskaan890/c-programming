#include <stdio.h>
int main()
{
    int octal, dec=0, rem, base=1;
    printf("enter  the octal number:");
    scanf("%d",&octal);
    while(octal>0)
    {
        rem=octal%10;
        dec=dec+rem*base;
        octal=octal/10;
        base= base*8;
        }
        printf("decimal equivalent is :%d",dec);
        return 0;
}


