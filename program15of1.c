
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool check(int Arr[],int iLength,int iNo)
{ 
   bool bFlag=false;
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
          
           return true;
        }
        
         
          
        
    }

    
   return false;  
} 
int main()
{
    int iSize=0,iRet=0,iCnt=0,iValue=0;
    int*p=NULL;
    bool bRet=false;

    printf("enter number of elements");
    scanf("%d",&iSize);

     printf("enter number of elements");
    scanf("%d",&iValue);

    p=(int *)malloc (iSize * sizeof(int));

    if(p==NULL)
    {
        printf("unable to allocate memory");
        return-1;

    }
    printf("enter %d elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
      
        scanf("%d",&p[iCnt]);

    }
    bRet=check(p,iSize,iValue);
    if(bRet==true)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    free(p);

    return 0;
}