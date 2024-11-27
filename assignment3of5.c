#include<stdio.h>
#include<stdbool.h>
  typedef bool BOOL;
#define TRUE 1
#define FALSE 0
 BOOL ChkVowel(char cNo)
{
    if(cNo=='a'||cNo=='e'||cNo=='i'||cNo=='o'||cNo=='u'||
    cNo=='A'||cNo=='E'||cNo=='I'||cNo=='O'||cNo=='U')
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
        
    }
    return 0;
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter character\n");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}