#include<stdio.h>
int DollarToINR(int iNo)
{
    int iNo2=70;
    if(iNo2==70)
    {
        printf("%d",iNo);
    }
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number of USD");
    scanf("%d",&iValue);
    iRet=DollarToINR(iValue);
    printf("Value in INR is %d",iRet);
    return 0;
}