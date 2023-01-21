#include<stdio.h>
int main(){
    int tc,cst,a,b,c;
    scanf("%d%d%d%d",&a,&b,&c,&cst);
    tc=cst*((a+2*c)*(b+2*c)-(a*b));
    printf("%d",tc);
}