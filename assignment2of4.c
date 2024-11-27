#include<stdio.h>
int Display(int iNo,int iFrequency)
{
   
    if(iNo>iFrequency)
    {
        iNo=-iNo;
    }
    if(iNo>iFrequency)
    {
        iFrequency=-iFrequency;
    }
    for(iNo=1;iNo<=iFrequency;iNo++)
    {
        printf("0\n",iFrequency);
    }
}
int main()
{
   int iValue=0;
   int iCount=0;
   printf("Enter number");
   scanf("%d",&iValue);
   printf("Enter frequency");
   scanf("%d",&iCount);
   Display(iValue,iCount);
    return 0;
}