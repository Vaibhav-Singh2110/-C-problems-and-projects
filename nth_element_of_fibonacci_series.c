#include<stdio.h>
int fibonacci(int n); 

int main(){
     int a;
     printf("Enter the nth term where you want to find the fibonacci series number\n");
     scanf("%d", &a);
     printf("The fibonacci series number at %dth term is %d", a, fibonacci(a));
     return 0;
}
 
int fibonacci(int n){
    if(n==1){
        return 0;
    }else if(n == 2){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
} 