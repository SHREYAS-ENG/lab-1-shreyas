#include<stdio.h>
int factorial(int x);
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the factorial is : %d",factorial(n));
    return 0;
}
int factorial(int x){ int fact;
if (x==0)
fact=1; else
 fact=1;
for(int i=1;i<=x;i++)
fact=fact*i;
return fact;
}
