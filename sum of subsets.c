#include<stdio.h>
int n, target,arr[10];
void sumset(int i,int sum)
{
    if (sum==target)
    {
        printf("subset found:");
        for(int k=0;k<i;k++)
            if(arr[k]!=-1)
            printf("%d",arr[k]);
            printf("\n");
            return;
    }
    if (i>=n||sum>target)
        return ;
    int temp=arr[i];
    sumset(i+1,sum+temp);
    arr[i]=-1;
    sumset(i+1,sum);
    arr[i]=temp;

}
int main()
{
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter  target sum:");
    scanf("%d",&target);

    sumset(0,0);
    return 0;
}
