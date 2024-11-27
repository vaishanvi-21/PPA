#include<stdio.h>
int KMtoMeter(int iNo)
{
   int i1 =1000;
  int value2=iNo*i1;
   while(value2<=iNo)
   {
    i1++;
   }
   return value2;
   
   
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter distance");
    scanf("%d",&iValue);
    iRet=KMtoMeter(iValue);
    printf("convert km to mater%d",iRet);
    return 0;
}