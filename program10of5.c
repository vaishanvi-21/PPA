#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt=0,iDigit=0,irev=0;
   /* if(iStart<0)
    {
        iStart=-iStart;
    }
    if(iEnd<0)
    {
        iEnd=-iEnd;
    }*/
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
      if(iStart>iEnd)
      {
    
      } 
        
       printf("%d\n",iCnt); 
    }
}    
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter staring point");
    scanf("%d",&iValue1);
    printf("enter ending point");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
    return 0;
    
}






