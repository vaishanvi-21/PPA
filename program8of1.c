#include<stdio.h>
double CircleArea(float fRadius)
{ 
    float PI=3.14;
    double  dArea=0.0f; 
    dArea=((double)PI*(double)fRadius*(double)fRadius);
    return dArea; 
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("enter radius");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("circlearea is%lf",dRet);
     
    return 0;


}