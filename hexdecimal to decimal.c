#include<stdio.h>
#include<string.h>
int main()
{
    char hex[32];
    int dec=0,lenght,base=1;
    int value;
    printf("enter hexadecimal number:");
    scanf("%s",&hex);
    lenght=strlen(hex);
    for(int i=lenght-1;i>=0;i--)
    {
    if(hex[i]>='0' &&hex[i]<='9'){
        value=hex[i]-'0';
    }
  else if(hex[i]>='A' &&hex[i]<='F'){
        value=hex[i]-'A'+10;
}
else if(hex[i]>='a' &&hex[i]<='f'){
        value=hex[i]-'a'+10;

        }
        else {
            printf("invalid hexadecimal:%c\n",hex[i]);
            return 0;
        }
        dec=dec+value* base;
        base=base*16;
}
printf("decimal number=%d\n",dec);
return 0;
}
