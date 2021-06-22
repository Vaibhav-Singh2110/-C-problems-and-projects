#include<stdio.h>
int main(){
    int m,n,r;
    printf("Enter two numbers\n");
    scanf("%d%d",&m,&n);
    while (n>0)
    {
        r = m%n;
        m = n;
        n = r;
    }
    printf("The GCD of the given two numbers is %d",m);
    
    
   return 0; 
} 