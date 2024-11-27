#include<stdio.h>
int EvenFactorial( int iNo)
{
   int iCnt=0,iEven=1;
   
   for(iCnt=1;iCnt<=iNo;iCnt++)   
   {
    if(iCnt%2==0)
    {
    printf("%d ",iCnt);
    iEven*=iCnt;
    }
    
   }
   return iEven;
} 
int main()
{
    int iValue=0,iRet=0;

    printf("enter number of USD:\n");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);
    printf("value in INR is %d",iRet);

    return 0;
}