#include<stdio.h>
void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt=0;
   /* if(iStart<0)
    {
        iStart=-iStart;
    }
    if(iEnd<0)
    {
        iEnd=-iEnd;
    }*/
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
       if(iCnt%2==0)
       {
        printf("%d\t",iCnt);
       }
        
    }
}    
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter staring point");
    scanf("%d",&iValue1);
    printf("enter ending point");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);
    return 0;
    
}

