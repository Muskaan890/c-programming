#include <stdio.h>
int main()
{
    int num, dec=0, rem, base=1;
    printf("enter  the octal number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        dec=dec+rem*base;
        num=num/10;
        base= base*8;
        }
        printf("decimal equivalent is :%d",dec);
        return 0;
}
