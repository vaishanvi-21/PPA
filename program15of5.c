#include<stdio.h>
#include<stdlib.h>
int product(int Arr[],int iLength)
{
    int iCnt=0,imulti=0,count=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if( (Arr[iCnt]%2)!=0)
        {  
        count++;
        printf(" output:%d\t",Arr[iCnt]);
        imulti=imulti*count+Arr[iCnt];
         
            
        }
       
    }
    
    return imulti;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0,iValue=0;
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
    iRet=product(p,iSize);
    printf("Result is%d\n",iRet);
    free(p);

    return 0;
}
