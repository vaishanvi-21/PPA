#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{

    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
          return 1;
        }
         
    } 
   return -1;  
} 

int main()
{
    int iSize=0,iRet=0,iCnt=0,iLength=0,iValue=0;
    int*p=NULL;
    
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
    iRet=FirstOcc(p,iSize,iValue);
    if(iRet == -1)
    {
        printf("there is no such number :-1");
    }
    else
    {
        printf("First occurrence of number is%d :1");
    }
    free(p);

    return 0;
}