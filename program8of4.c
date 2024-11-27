#include<stdio.h>
double FhtoCs(float fTemp)
{
     double dFh1=0.0f,dValue2=0.0f;
     int dV1=32;
     if(fTemp<0)
     {
      fTemp=-fTemp;
     }
     dFh1=((fTemp-dV1) *(5/9));
    
   while(dFh1<=fTemp)
    {
      dFh1++;
    }
   return dFh1;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;
    printf("enter temperature in Fahreheit");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);

    printf("convert fh to cs:%lf",dRet);
    return 0;
}