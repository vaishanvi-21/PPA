#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt=0,iDigit=0,iSum=1;
     if(iNo<0)
     {
        iNo=-iNo;
     }
     
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
       if(iCnt%2!=0)
       {  
          //iDigit=iCnt--;
          //iSum=iSum+iCnt;
          iSum*=iCnt;
        // iSum=iSum*iSum+iCnt;
           
       }
   }

   return iSum;

}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet=OddFactorial(iValue);
    printf("odd Factorial of number is %d",iRet);
    return 0;
}