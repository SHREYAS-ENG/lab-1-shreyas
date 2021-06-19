#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],m,l,i,t=0,p;
    printf("enter the length of the array: ");
    scanf("%d",&l);
   printf("enter  the array: \n");
   for(i=0;i<l;i++)
    scanf("%d",&a[i]);
   printf("enter the element to be searched :\n");
    scanf("%d",&m);
   for(i=0;i<l;i++){
if(a[i]==m){
t=1;  p=i;
    break;
}}
if(t==1)
    printf("the element is in the position :%d ",p+1);
   else printf("the element is not present ");
return 0;
}
