#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch ='\0';
    char c ='\0';


    for(i=1,c='A';i<=iRow;i++,c++)
    
    {
        for(j=1,ch='a';j<=iCol;j++,ch++)
        {

            if(i%2==0)
            {
            printf("%c\t",ch);
            }
            else if(i==1||i==iCol)
            {
              printf("%c\t",c);
            }
           
                
            

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