#include<stdio.h>
void RangeDisplay(int iStart,int iEnd)
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
       
        printf("%d\t",iCnt);
        
    }
}    
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter staring point");
    scanf("%d",&iValue1);
    printf("enter ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return 0;
    
}

