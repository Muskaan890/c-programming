#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
    int dp[n];
    dp[0]=0;
    dp[1]=1;
    for(i=2;i<n;i++)
        dp[i]=dp[i-1]+dp[i-2];
    for(i=0;i<n;i++)
        printf("%d",dp[i]);
    return 0;
}
