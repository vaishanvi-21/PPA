#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0;
   
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        
        printf("%d\t",iCnt*4);
        
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);


}