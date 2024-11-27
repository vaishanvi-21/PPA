#include<stdio.h>
void NonFact(int iNo)
{
    int iNo2=1;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iNo2=1;iNo2<=iNo;iNo2++)
    {
        if(iNo%iNo2!=0)
        {
            printf("%d\n",iNo2);
        }
    }
    

}
int  main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    NonFact(iValue);

    return 0;
}