#include<stdio.h>
int main()
{
    int a,b,i=2,ans=1;
    scanf("%d%d",&a,&b);
    int x=a>b?a:b;
    while(i<x)
    {
        if(a%i==0&&b%i==0)
        {
            ans=ans*i;
            a=a/i;
            b=b/i;
        }else{
            i++;
        }
    }int z=ans*a*b;
    printf("%d",z);
}