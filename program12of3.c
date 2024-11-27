#include<stdio.h>
int CountRange(int iNo)
{
    int Count=0,iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;

    }
    while(iNo>0)
    {
       iDigit=iNo%10;
        if(iDigit)
        {
            Count++;
        }
        iNo=iNo/10;
    }
    return Count;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);
    printf("%d",iRet);
     return 0;
}