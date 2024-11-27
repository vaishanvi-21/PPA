#include<stdio.h>

void display(int iNo)
{
    int iCnt=0;
   
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);

    display(iValue);


}