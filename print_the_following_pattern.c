#include<stdio.h>
int main()
{ int a,j,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=a;j>0;j--){
            printf("%d ",j);
        }
        printf("
");
    }
}