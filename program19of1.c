#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    char ch='\0';
    for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");

}

int main()
{
    int iValue=0;
    printf("enter number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}