#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("enter the coeffiecients of the quadratic equations : ");
    scanf("%f %f %f",&a,&b,&c);
    d=((b*b)-(4*a*c));
     if(d>0){
        r1=((-b)+sqrt(d))/(2*a);
        r2=((-b)-sqrt(d))/(2*a);
       printf("the roots are =%2f  \n",r1);
       printf("the roots are =%2f ",r2);
        }
         else if(d==0){
            r1=(-1*b)/(2*a);
            r2=r1;
            printf("the roots are =%2f  \n",r1);
       printf("the roots are =%2f  ",r2);
        }
        else
            printf("the roots are imaginary ");
    return 0;
}

