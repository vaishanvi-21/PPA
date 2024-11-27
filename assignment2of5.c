#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{  

   int ans=iNo%2;
    if(ans==0)
    {
        printf("even number\n");
    }
    else
    {
        printf("odd number\n");
    }
}
int main()
{
    int iValue=0;
    int result=0;
    BOOL bRet=FALSE;
    printf("Enter number");
    scanf("%d",&iValue);
    bRet=ChkEven(iValue);
    
    return 0;
}