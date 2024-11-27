#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
    double Rarea=0.0f;
    Rarea=((double)fWidth*(double)fHeight);
    return Rarea;
}
int main()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet=0.0;
    printf("enter width");
    scanf("%f",&fValue1);
    printf("enter height");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("rectarea is:%lf",dRet);


  return 0;
}
