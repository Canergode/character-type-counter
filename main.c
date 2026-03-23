#include <stdio.h>
#include <string.h>

int main()
{
    char text[200];
    int i,letterCount=0,digitCount=0,spaceCount=0;

    // Get string from user
    printf("Enter a string:\n");
    fgets(text,200,stdin);

    // Count letters,digits and spaces
    for(i=0;text[i]!='\0';i++)
    {
        if((text[i]>='a' && text[i]<='z' || (text[i])>='A' && text[i]<='Z'))
        {
            letterCount++;
        }
        else if(text[i]>='0' && text[i]<='9')
            {
                digitCount++;
            }
            else if(text[i]=' ')
            {
                spaceCount++;
            }
    }

    // Print the results
    printf("Letter count:%d\n",letterCount);
    printf("Digit count:%d\n",digitCount);
    printf("Space count:%d\n",spaceCount);

    return 0;
}

