#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{
    int iCnt=0,iEven=0,iOdd=0,iDiff=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if ((Arr[iCnt]%2)==0)
        {
          iEven++;

         printf("enter even %d\n",iEven);
            
        }
        else
        {
          iOdd++;
           printf("enter odd %d\n",iOdd);

        }


    }
     iDiff=iEven-iOdd;
      return iDiff;
    
}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize* sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate memmory");
        return-1;
    }

    printf("Enter the elements : %d\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iRet=CountEven(p,iSize);
    printf("Result is%d\n",iRet);
    free(p);

    return 0;
}
