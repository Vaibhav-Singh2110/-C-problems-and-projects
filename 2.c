#include <stdio.h>
int fib(int n){
    if(n == 1){
        return 0;
    }else if(n == 2){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}
int main() {
   int a;
   printf("Enter the number of terms you want to print\n");
    scanf("%d", &a);
    for(int i = 0; i <= a ; i++){
        printf("%d ", fib(a));
    }
    

    return 0;
}