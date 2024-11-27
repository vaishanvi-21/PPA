#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo<=0)
    { 
        iNo=-iNo;    

        
    }
    for(iNo=2;iNo<=14;iNo+=2)
    {
        
     printf("%d\n",iNo);
    }
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}