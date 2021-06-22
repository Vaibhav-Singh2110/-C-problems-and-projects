

#include<stdio.h>

int main(){
  int n,r;
  for (int n = 1; n<=1000; n++)
  {
       int x=n;
       int sum =0;
    while (x!=0)
    {
       
        r = x%10;
        sum = sum + (r*r*r);
        x = x/10;
    }
    if (sum == n)
    {
      printf("%d\n", n);
    }
    
  }

  
    
   return 0; 
}