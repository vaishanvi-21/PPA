#include<stdio.h>
int FactRev(int iNo)
{
    int iNo2=0,product=1;
    for(iNo2=iNo-1;iNo2>=0;iNo2--)
    {
        if(iNo%iNo2==0)
        {
          if (!product){
            printf("*");
          
          }
          printf("%d",iNo2);
          product=0;
        
        }
        

    }
     //int ino3= iNo2*iNo2;
    
     //printf("\n");

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);
    FactRev(iValue);
    iRet=FactRev(iValue);
    printf("%d",iRet);
    
    return 0;
}