#include<stdio.h>

int main(){
    int n; int prime = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if ((n%i) == 0)
        {
            prime = 0;
        }
        
    }

if (prime == 1)
{
    printf("The entered number is a prime number");
}else{
    printf("The entered number is not prime.");
}

    


return 0;
}

    