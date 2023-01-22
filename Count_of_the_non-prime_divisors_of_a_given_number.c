#include<stdio.h>
int main()
{
    int n,c1=0;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        if(n%i==0)
        {
            int c=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }if(c!=2)
            {
                c1++;
            }
        }
    }printf("%d",c1);
}