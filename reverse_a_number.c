#include<stdio.h>

int reverse(int num){
     int  rem, rev = 0;
    while (num!=0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    return rev;
}
int main(){
   
   int num;
   printf("Enter a number \n");
   scanf("%d", &num);
    int rev = reverse(num);
    printf("The reversed number is %d ", rev);
    
   return 0; 
}