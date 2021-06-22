#include<stdio.h>
int main(){
    char str[20];
    printf("Enter a character\n");
    scanf("%d", &str);
    if (str[1]>='a' && str[1]<='z')
    {
        printf("Lowercase alphanumeric string");
    }
    else if (str[1]>='A' && str[1]<='Z')
    {
        printf("Uppercase alphanumeric string");
    }
    
    else
    {
        printf("not alphanumeric");
    }
    
    
    
   return 0; 
}