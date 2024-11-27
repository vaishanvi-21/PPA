#include<stdio.h>
int Factorial( int iNo)
{
   int iCnt=0,iEven=1,iodd=1,isum=0;

   if(iNo<0)
   {
    iNo=-iNo;
   }
   
   for(iCnt=1;iCnt<=iNo;iCnt++)   
   {
    if(iCnt%2==0)
    {
     printf("%d even number \n ",iCnt);
        iEven=iEven*iCnt;
   
    }
    else if(iCnt%2!=0)
    {
        printf("%d odd number \n ",iCnt);
        iodd= iodd*iCnt;
    }
    
   } 
   isum=iEven-iodd;
   return isum;
   
} 
int main()
{
    int iValue=0,iRet=0;

    printf("enter number of USD:\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("value in INR is %d",iRet);

    return 0;
}