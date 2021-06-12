#include<stdio.h>
#include<math.h>
float sum(int x);
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the sum is : %2f",sum(n));
    return 0;
    }
    float sum(int x){
    float s=0;
    for(int i=1;i<=x;i++)
    s=s+(i/pow(i,2));
    return s;
    }
