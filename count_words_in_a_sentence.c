#include <stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a sentence\n");
    gets(str);
    printf("%s\n", str);
    int count  = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        count++;
    }
    
    printf("number of words in the given sentence is %d", count);
    


    return 0;
}