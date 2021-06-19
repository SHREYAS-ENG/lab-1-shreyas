#include<stdlib.h>
#include<stdio.h>
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
return 0;
}
