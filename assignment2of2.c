#include<stdio.h>
void  Display(int iNo)
{    
    int iCnt=0;
    if(iNo>iCnt)
    {
        iNo=-iNo;
    }
    if(iNo>iCnt)
    {
        iCnt=-iNo;
    }
      iNo=1;
    while (iNo>=iCnt)
    {
        printf("*");
        iNo--;
    }
    
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;

}