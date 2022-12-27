#include<stdio.h>
int main(){
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x=c*2;
    if(a<=b+x){
        printf("Qualify");
    }
    else printf("Not Qualify");
}