#include <stdio.h>

int main()
{
    int n;
    printf("Enter n for which you want to print first even natural numbers\n");
    scanf("%d", &n);
    printf("first %d natural even numbers in correct order is:\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\t\n", i);
        }
        
    }
    printf("first %d natural even numbers in reverse order is:\n", n);
    for (int i = n; i >0; i--)
    {
        if (i%2 == 0)
        {
            printf("%d\t\n", i);
        }
        
    }
    

    return 0;
}