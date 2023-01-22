#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a=0,b=1;
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
}