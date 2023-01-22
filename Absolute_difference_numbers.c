#include<stdio.h>
#include<math.h>
int reverse(int n)
{
    int rev=0;
    while(n)
    {
        int r=n%10;
        rev=rev*10+r;
        n/=10;
    }return rev;
}
int reverse1(int n,int x)
{
    int rev=0,c=0;
    while(n)
    {
        if(c==x)
        {
            break;
        }
        int r=n%10;
        rev=rev*10+r;
        n/=10;
        c++;
    }return rev;
}

int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int z=reverse1(n,x);
    z=reverse(z);
    int y=reverse(n);
    y=reverse1(y,x);
    printf("%d",abs(z-y));
    
}