#include<stdio.h>
int main(){
    char ch,A,a,Z,z;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("uppercase alphabet");
    }
  else if(ch>='a'&&ch<='z'){
      printf("lowercase alphabet");
  } 
  else printf("not an alphabet");
}