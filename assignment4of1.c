#include<stdio.h>
int MultFact(int iNo)
{
    int iNo2=0,product=1;
    for(iNo2=1;iNo2<iNo;iNo2++)
    {
        if(iNo%iNo2==0)
        {
          if (!product){
            printf("*");
          }
          printf("%d\n",iNo2);
       
          product=0;
        }

    }
     int ino3= iNo2*iNo2;
     return ino3 ;
      // printf("%d\n",ino3);

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet=MultFact(iValue);
    printf("%d",iRet);
    return 0;
}