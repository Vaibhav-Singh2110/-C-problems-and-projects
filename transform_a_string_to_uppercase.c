#include<stdio.h>
int main(){
    char str[20];
    printf("Enter a character\n");
    scanf("%d", &str);
   gets(str);
   for (int i = 0; i < str[i]; i++)
   {
       if (str[i] >= 'a' && str[i] <= 'z')
       {
           str[i] = str[i] -32;

       }
   
       
   
   }
   
   
   
   printf("%s", str);
   
    
    
    
   return 0; 
}