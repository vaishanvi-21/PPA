#include<stdio.h>
int FactDiff(int iNo)
{
      int iNo2=1;
    int sum=0;
    int nosum=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    
    for (iNo2=1;iNo2<=iNo;iNo2++)
    {
       if(iNo%iNo2==0)
       {
  
    
       if(iNo2%2==0)
           {
              sum+=iNo2;
           }
       }
       else
        {
             
           nosum+=iNo2;
        }
    
    }
    
  
    return sum-nosum;

     

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}
/*
 if(iNo%iNo2==0)
        {

           sum+=iNo2;
           
          
        }

        else
        {
           
           nosum+=iNo2;
           

          
        }
*/