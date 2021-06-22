#include <stdio.h>

int main()
{
    int n;
    printf("Enter n for which you want to print first n odd natural numbers\n");
    scanf("%d", &n);
    printf("first %d natural odd numbers is:\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            printf("%d\t\n", i);
        }
        
    }
    int sum =0;
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            sum = sum + i;
        }
        
    }
    printf("the sum of first %d odd natural numbers is: %d", n, sum);
    

    return 0;
}