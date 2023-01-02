#include<stdio.h>
int main(){
    int a,x,i;
    scanf("%d",&a);
    for(i=1;i<=12;i++){
        x=a*i;
        printf("%d x %d = %d
",a,i,x);
    }
}
