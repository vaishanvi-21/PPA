#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[],int iLength,int iStart,int iEnd)
{

    int iCnt=0,count=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if((Arr[iCnt]>=iStart)&&(Arr[iCnt]<=iEnd))
      {
        count++;
        printf(" output:%d\t",Arr[iCnt]);
      }

   }
} 

int main()
{
    int iSize=0,iRet=0,iCnt=0,iLength=0,iValue1=0,iValue2=0;
    int*p=NULL;
    
    printf("enter number of elements");
    scanf("%d",&iSize);

    printf("enter the starting point");
    scanf("%d",&iValue1);

    printf("enter the ending point");
    scanf("%d",&iValue2);


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
    iRet=Range(p,iSize,iValue1,iValue2);
   
    free(p);

    return 0;
}