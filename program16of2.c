#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int  min(int Arr[],int iLength1)
{ 
   
    
    int iCnt = 0, imin = 0;
    imin = Arr[0];

    for(iCnt = 0; iCnt < iLength1; iCnt++)
    {
        if(Arr[iCnt] <imin)
        {
            imin= Arr[iCnt];
        }
    }
    return imin;

} 
int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet = min(ptr,iLength);
    printf("largest number is%d\n",iRet);
    free(ptr);

    return 0;
}