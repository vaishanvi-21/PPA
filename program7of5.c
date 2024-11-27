#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt=0,iDigit=0,iSum=1,iSumEven=0;
     if(iNo<0)
     {
        iNo=-iNo;
     }
     
   while (iNo > 0)
       {
         
        if (iDigit % 2 == 0)
         { 
            iSumEven=iSumEven*iSumEven+iDigit;
            printf("%d\n",iSumEven);
        
        if(iDigit%2!=0)
        
        { 
            iSum*=iDigit;
            printf("%d\n",iSum);
        }
         }
       
    }

     
    return iSumEven - iSum;
}


int main()
{
    int iValue=0,iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet=FactorialDiff(iValue);
    printf("Diff Factorial of number is %d",iRet);
    return 0;
}