#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
int i,m,n;
printf("enter the starting and ending number : ");
scanf("%d %d",&m,&n);
if(m%2==0){printf("the even numbers are : \n");
for( i=m;i<n;i+=2){
  printf("%d \t",i);}
   }
else{printf("the even numbers are : \n");
    for(i=m+1;i<n;i+=2){
  printf("%d \t",i); }     }

}

