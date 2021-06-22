#include<stdio.h>

int factorial(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }else
    {
        return n*factorial(n-1);
    }
    return factorial;
    
}
int main(){
    int n;
    printf("Enter a number to calculate its factorial\n");
    scanf("%d",&n);
    printf("The factorial of the given number is %d", factorial(n));
   return 0; 
}