#include<stdio.h>
int main(){
    int n;
    printf("Enter the integer n of which you want to print the multiplication table for: \n");
    scanf("%d", &n);
    for (int  i = 1; i <= 10; i++)
    {
        printf("%d \n", n*i);
    }
    
   return 0; 
}