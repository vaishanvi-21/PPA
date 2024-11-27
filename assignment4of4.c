#include<stdio.h>
int SumNonFact(int iNo)
{
    int iNo2=1;
    int sum=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iNo2=1;iNo2<=iNo;iNo2++)
    {
        if(iNo%iNo2!=0)
        {

           sum+=iNo2;
          
        }
    }
     return sum;
  
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}