#include<stdio.h>
int Display(int iNo)
{
    if(10>iNo)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}