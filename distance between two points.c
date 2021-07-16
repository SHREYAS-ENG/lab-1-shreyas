#include<stdio.h>
#include<math.h>
int main()
         {
        float x1,x2,y1,y2,d;
        printf(" enter coordinates of first point: \n");
        scanf("%f%f",&x1,&y1);
        printf(" enter coordinates of second point: \n");
        scanf("%f%f",&x2,&y2);
        d= sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        printf("the distance between to points is %.2f ",d);
        return 0;
        }
