#include<stdio.h>

void Display(int iNo )
{
    int iCnt=0;

   if(iCnt<iNo)
   {
    iCnt=-iCnt;
   }
   if(iNo<iCnt)
   {
    iNo=-iNo;
   }
    iCnt=1;
    while(iCnt<=iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{   
    int iValue =0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;

}