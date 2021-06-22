#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int str;
    printf("Enter a binary number\n");
    scanf("%d", str);
    int sum = 0, i = 0;
    while (str)
    {
        sum = sum + pow(2,i) * (str%10);
        str = str/10;
        i++;
    }
    
    printf("Binary to decimal is %d", sum);
    

    

    return 0;
}