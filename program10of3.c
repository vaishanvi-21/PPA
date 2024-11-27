#include<stdio.h>
int RangeSum(int iStart,int iEnd)
{
    int iCnt=0,iSum=0;
    if(iStart<0)
    {
        iStart=-iStart;
    }
    /*if(iEnd<0)
    {
        iEnd=-iEnd;
    }*/
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
   
        iSum=iCnt+iSum;
       
        
    }
    return iSum;
}    
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("enter staring point");
    scanf("%d",&iValue1);
    printf("enter ending point");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);
    printf("Addition is%d",iRet);
    return 0;
    
}

