#include<stdio.h>
#include<stdlib.h>


int Diffrence(int Arr[],int iLength1)
{ 
    int iCnt = 0, iMax = 0,imin=0,iDiff=0,lar=0;
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength1; iCnt++)
    {  
        
            
        if(Arr[iCnt] > iMax)
        {
           
            printf("%d\n",lar);
        }
        else
        {
            
            printf("%d\n",imin);
        }  
        
    }
    iDiff=lar-imin;
    
    return iDiff ; 

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
    iRet = Difference(ptr,iLength);
    printf("Difference %d\n",iRet);
    free(ptr);

    return 0;
}