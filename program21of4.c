#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    


    for(i=iRow;i>=1;i--)
    
    {
        for(j=iCol;j>=1;j--)
        {

        
            
           
            printf("%d\t",i);
            

        }
       
       printf("\n"); 
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("enter number of rows:\n ");
    scanf("%d",&iValue1);

    printf("enter number of columns:\n ");
    scanf("%d",&iValue2);
     
     Pattern(iValue1,iValue2);
    return 0;
}