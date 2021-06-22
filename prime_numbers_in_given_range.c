#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two numbers\n");
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        int prime = 1;
        if (i == 0 || i == 1)
        {
            continue;
        }
        
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d ", i);
            
        }
    }

    return 0;
}