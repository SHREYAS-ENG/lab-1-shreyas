#include<stdio.h>
int reverse( int x);
int main()
{
     int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the reversed number is : %d",reverse(n));
    return 0;}
    int reverse(  int x){
    int r=0,rem;
    while(x!=0){
        rem=x%10;
        r=r*10+rem;
        x/=10;
    }return r;
    }
