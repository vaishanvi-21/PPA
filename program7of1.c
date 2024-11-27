#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0, iNo2=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    iCnt=1;
  for (iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("*\t"); 
    }
    
 
    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("#\t");
    }
    
    printf("\n"); 
}
    

int main()
{
    int iValue=0;
    printf("enteer number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}