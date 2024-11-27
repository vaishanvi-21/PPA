#include<stdio.h>
#include<stdbool.h>
bool ChkZero(int iNo)
{
   int count=0,iDigit=0;
   while(iNo>0)
   {
      iDigit=iNo%10;
      count++;
      iNo=iNo/10;


   
   if(iDigit==0)
   {
     return true;

   } 
   else
   {
        return false;
   }
   } 
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number");
    scanf("%d",&iValue);

   bRet=ChkZero(iValue);
   if(bRet==true)
   {
    printf("It contains Zero");
   }
   else{
    printf("there is no Zero");
   }

       return 0;
}