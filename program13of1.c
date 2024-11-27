#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iCnt=0,iDiff=0,iDiffodd=0,iSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
           iDiff=iDiff+Arr[iCnt];
        }
        else
        {
            iDiffodd=iDiffodd+Arr[iCnt];
        }
        printf("even elements:%d\n",iDiff);
        printf("odd element:%d\n",iDiffodd);
        
    }
      iSum=iDiff-iDiffodd;
      return iSum;
}
    
  int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0,iRet=0;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=Difference(ptr,iSize);
    printf("Result is%d",iRet);
    free(ptr);
    return 0;
}