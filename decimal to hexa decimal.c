#include <stdio.h>
int main()
{
    char hexa[50];
    int dec,rem,base=1,i;
    printf("enter decimal number:");
    scanf("%d",&dec);
    while(dec!=0)
    {
        rem=dec%16;
        if(rem<10)
        {
            rem=rem+48;
        }
        else
        {
            rem=rem+55;
        }
        hexa[base++]=rem;
        dec=dec/16;
    }
    printf("hexadecimal equivalent is:");
    for(int i=base-1;i>0;i--)
    {
    printf("%c",hexa[i]);
    }
    return 0;
}
