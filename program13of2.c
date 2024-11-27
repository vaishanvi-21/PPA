#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSumEven = 0, iSumOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
             printf("Addition of even elements : %d\n", Arr[iCnt]);
        }
        
    }
   
    
}

int main()
{
    int *p = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate memmory");
        return-1;
    }

    printf("Enter the elements : %d\n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    Display(p,iLength);
    free(p);

    return 0;
}
