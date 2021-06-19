#include<stdlib.h>
#include<stdio.h>
void interchange(int x,int y);
int main()
{
int a[100],la,s,l;
printf("enter the length of the array : ");
scanf("%d",&l);
printf("enter the array : \t");
for(int i=0;i<l;i++)
    scanf("%d",&a[i]);
la=a[0];
for(int j=0;j<l;j++){
    if(la<a[j]){
    la=a[j];}}
printf("the largest number in the array is:  %d",la);
printf("\n");
s=a[0];
for(int k=0;k<l;k++){
    if(s>a[k]){
    s=a[k];}}
printf("the smallest number in the array is:  %d ",s);
printf("\n");
interchange(la,s);
return 0;
}
void interchange(int x,int y){
int t;
t=x;x=y;y=t;
printf("AFTER THE INTERCHANGING : \n");
printf("the largest number in the array is:  %d",x);
printf("\n");
printf("the smallest number in the array is:  %d ",y);
}
