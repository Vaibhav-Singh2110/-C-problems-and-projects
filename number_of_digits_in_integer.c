#include<stdio.h>
#include<string.h>
int main(){
    long int n;
    int rem, count = 0;
    printf("Enter a number for which you want to find number of digits in it\n");
    scanf("%d", &n);
    if (n == 0){
        printf("There is onky one digit in the number");
    }else
    {
        
    
    
    while (n!=0)
    {
        
        n = n/10;             //this program can count number of digits upto 10 only.
        count++;
    }
    
    printf("the number of digits in the given integer is %d", count);
    }
    
    
    
   return 0; 
}