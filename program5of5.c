#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0,iNo2=0,i=0;
     for(iCnt=1;iCnt<=iNo;iCnt++)
     {  
       
        
         
            printf("%d\n",iCnt*2);
         
        
         
     }  
        
    
}
int main()
{
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}
