#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    printf("x1 : ");
    scanf("%d",&x1);
    printf("y1 : ");
    scanf("%d",&y1);
    printf("x2 : ");
    scanf("%d",&x2);
    printf("y2 : ");
    scanf("%d",&y2);

    double dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    double slope =(y2-y1)/(x2-x1);

    printf("Distance between the points : %.2lf\nSlope of straight line joining the lines : %.2lf\n",dist,slope);

    return 0;
}