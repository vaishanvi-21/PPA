#include<stdio.h>
double SquareMeter(int iValue1)
{
   double i1 =0.0929;
  double value2=iValue1*i1;
   while(value2>=iValue1)
   {
    value2++;
   }
   return value2;
   
   
}
int main()
{
    int iValue=0;
    double dRet=0.0;
    printf("enter distance");
    scanf("%d",&iValue);
    dRet=SquareMeter(iValue);
    printf("convert  mater%lf",dRet);
    return 0;
}