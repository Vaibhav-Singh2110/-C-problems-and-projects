#include<stdio.h>

int main(){
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
    int sum = 0, r;
    while (n!=0)
    {
        r = n%10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    printf("sum is %d ", sum);
    if(sum == n){
        printf("not");
    }else{
        printf("yes");
    }
    
   return 0; 
}