#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,s=0;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n>0){
        m=n%10;
        s=s+m;
        n=n/10;
        }
    printf(" the sum is = %d",s);

}
