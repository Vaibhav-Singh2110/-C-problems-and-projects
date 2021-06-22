#include<stdio.h>
int main(){
    printf("Enter the numebr\n");
    int n,rem, sum = 0;
    scanf("%d", &n);
    while (n!=0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    printf("Sum of the digits is %d", sum);
    
   return 0; 
}