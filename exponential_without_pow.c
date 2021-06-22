#include<stdio.h>
int main(){
    int m, n;
    printf("Enter the base of the number\n");
    scanf("%d", &m);
    printf("Enter the power of the number\n");
    scanf("%d", &n);
    long long int val = 1;
    for (int i = 0; i < n; i++)
    {
        val = val*m;
    }
    printf("%d to the power of %d is %lld", m, n, val);
    
    
   return 0; 
}