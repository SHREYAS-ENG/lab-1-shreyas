#include<stdio.h>
#include<stdlib.h>

void output(float x,float y,float z)
{
   float l;
   if(x<=y)
        l=x;
    else l=y;
    if(l<=z)
        printf("the smallest no is = %f",l);
    else printf("the smallet is =%f",z);

}
int main()
{
    float a,b,c;
    printf("enter the 3 numbers \n");
    scanf("%f %f %f",&a,&b,&c);
    void output(a,b,c);
return 0;
}
