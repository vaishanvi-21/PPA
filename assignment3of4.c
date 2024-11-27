#include<stdio.h>
#include<ctype.h>

void displayConvert(char cValue)
 {
    if (isupper(cValue)) 
     {
        printf("%c", tolower(cValue));
    } else if (islower(cValue))
    {
        printf("%c", toupper(cValue));
    } 
  else
   {
        printf("Invalid character. Please enter an alphabet.");
    }
}

int main() 
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf(" %c", &cValue); 
    displayConvert(cValue);
    return 0;
}