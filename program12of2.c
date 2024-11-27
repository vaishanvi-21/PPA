#include<stdio.h>
int CountOdd(int iNo)
{
    int Count=0,iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;

    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit%2!=0)
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

    iRet=CountOdd(iValue);
    printf("%d",iRet);
     return 0;
}