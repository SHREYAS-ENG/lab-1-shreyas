#include<stdio.h>
#include<stdlib.h>
void main(){
int n,i,s=0;
printf("enter the no odd numbers : ");
scanf("%d",&n);
for(i=1;i<=n+1;i++){
        if(i%2!=0)
            {
                s=s+(i*i);}
        }
printf("the sum of square of first n odd numbers is : %d",s);
}
